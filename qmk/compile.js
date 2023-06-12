#!/usr/bin/node

const os = require("os");
const fs = require('fs/promises');
const util = require('util');
const child_process = require('child_process')
const exec = util.promisify(child_process.exec)

const path = process.argv[2]
const name = process.argv[3]
const jsonFilePath = `${path}/${name}.json`
const processedJsonFilePath = `${path}/${name}.processed.json`
const cFilePath = `${path}/${name}.c`

async function main()
{
	const jsonData = await fs.readFile(jsonFilePath, { encoding: 'utf8' })
	
	let content = JSON.parse(jsonData)
	if (!content.macros) content.macros = []
	content.layers = content.layers.map(layer => layer.map(key => key
			.replace(/ANY\((.+?)\)/g, (_, any) =>
		{
			if (any.startsWith('$M:'))
				return 'QK_MACRO_' + (content.macros.push([any.slice(3)])-1).toString()
			return `ANY(${any})`
		})
	))
	
	await fs.writeFile(processedJsonFilePath, JSON.stringify(content, null, 2));
	
	const keymapFilePath = `${os.homedir()}/qmk_firmware/keyboards/${content.keyboard}/keymaps/2sh/keymap.c`
	
	await exec(`qmk json2c -o "${keymapFilePath}" "${processedJsonFilePath}"`)
	
	const cData = await fs.readFile(cFilePath, { encoding: 'utf8' })
	const keymapData = await fs.readFile(keymapFilePath, { encoding: 'utf8' })
	await fs.writeFile(keymapFilePath, keymapData.replace(' */', ' */\n\n\n' + cData));
	
	console.log(await exec(`qmk compile --keyboard "${content.keyboard}" --keymap 2sh`))
}

main()
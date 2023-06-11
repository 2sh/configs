const fs = require('fs');

fs.readFile(process.argv[2], 'utf8', (err, data) =>
{
	let content = JSON.parse(data)
	if (!content.macros) content.macros = []
	content.layers = content.layers.map(layer => layer.map(key =>
		key.replace(/ANY\(\$M\:(.+?)\)/g, (_, macro) =>
		{
			return "QK_MACRO_" + (content.macros.push([macro])-1).toString()
		})
	))
	
	fs.writeFile(process.argv[3], JSON.stringify(content, null, 2), err => {})
})

node anymacros.js "$1" "$1.macroed.json"
qmk compile "$1.macroed.json" && rm "$1.macroed.json"
'use strict';

const fs = require('fs');

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => {
    inputString += inputStdin;
});

process.stdin.on('end', _ => {
    inputString = inputString.replace(/\s*$/, '')
        .split('\n')
        .map(str => str.replace(/\s*$/, ''));

    main();
});

function readLine() {
    return inputString[currentLine++];
}

function designerPdfViewer(heights, word) {

    let letters = []

    for (let i = 0, j = 97; i < 26; i++, j++) letters.push(String.fromCharCode(j));
    

    let i = 0;
    let letterObj = letters.reduce((obj, letters) => {
        if (!obj[letters]) obj[letters] = heights[i++];
        return obj
    }, {})

    let letterHeights = []
    for (let i in word) letterHeights.push(letterObj[word[i]])

    let tallestLatter = Math.max(...letterHeights) * letterHeights.length
    return tallestLatter
}

function main() {
    const ws = fs.createWriteStream(process.env.OUTPUT_PATH);

    const h = readLine().split(' ').map(hTemp => parseInt(hTemp, 10));

    const word = readLine();

    let result = designerPdfViewer(h, word);

    ws.write(result + "\n");

    ws.end();
}

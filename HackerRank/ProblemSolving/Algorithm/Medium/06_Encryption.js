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

function encryption(str) {
    const root = Math.sqrt(str.length);
    let row = Math.floor(root),
        col = Math.ceil(root)
    
    row * col < str.length && row++
    let reWritten = ''

    for (let i = 0; i < col; i++) {
        for (let k = 0, j = i; k < row; k++, j += col)
            reWritten += str[j] === undefined ? '' : str[j]

        reWritten += ' '
    }

    return reWritten
}

function main() {
    const ws = fs.createWriteStream(process.env.OUTPUT_PATH);

    const s = readLine();

    let result = encryption(s);

    ws.write(result + "\n");

    ws.end();
}
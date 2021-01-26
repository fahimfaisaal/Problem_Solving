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

function stringConstruction(s) {
    let string = s.split(""),
        construction = 0;
    
    const stringObj = string.reduce((acc, letter) => {
        acc[letter] = letter

        return acc
    }, {})
    
    for (let v in stringObj) construction++
    
    return construction;
}

function main() {
    const ws = fs.createWriteStream(process.env.OUTPUT_PATH);

    const q = parseInt(readLine(), 10);

    for (let qItr = 0; qItr < q; qItr++) {
        const s = readLine();

        let result = stringConstruction(s);

        ws.write(result + "\n");
    }

    ws.end();
}
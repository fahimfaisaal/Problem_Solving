'use strict';

const fs = require('fs');

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', function(inputStdin) {
    inputString += inputStdin;
});

process.stdin.on('end', function() {
    inputString = inputString.split('\n');

    main();
});

function readLine() {
    return inputString[currentLine++];
}

function taumBday(b, w, bc, wc, z) {
    const cost = (b * bc) + (w * wc);

    if (bc < wc) wc = bc + z;
    else if (bc > wc) bc = wc + z;

    const conversionCost = (b * bc) + (w * wc)
    if (cost > conversionCost) return `${conversionCost}`

    return `${cost}`;
}

function main() {
    const ws = fs.createWriteStream(process.env.OUTPUT_PATH);

    const t = parseInt(readLine().trim(), 10);

    for (let tItr = 0; tItr < t; tItr++) {
        const firstMultipleInput = readLine().replace(/\s+$/g, '').split(' ');

        const b = BigInt(parseInt(firstMultipleInput[0], 10));

        const w = BigInt(parseInt(firstMultipleInput[1], 10));

        const secondMultipleInput = readLine().replace(/\s+$/g, '').split(' ');

        const bc = BigInt(parseInt(secondMultipleInput[0], 10));

        const wc = BigInt(parseInt(secondMultipleInput[1], 10));

        const z = BigInt(parseInt(secondMultipleInput[2], 10));

        const result = taumBday(b, w, bc, wc, z);

        ws.write(result + '\n');
    }

    ws.end();
}
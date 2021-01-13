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

// Complete the sockMerchant function below.
function sockMerchant(ar) {

    let counterObj = ar.reduce((acc, number) => {
        
        if (!acc[number]) acc[number] = 1
        else acc[number]++

        return acc
    }, {})

    ar.length = 0
    for (let i in counterObj) ar.push(counterObj[i])

    let match = 0;
    ar.forEach(number => {
        if (number % 2 !== 0) match += (number - 1) / 2
        else match += number / 2
    })

    return match;
}

function main() {
    const ws = fs.createWriteStream(process.env.OUTPUT_PATH);

    const n = parseInt(readLine(), 10);

    const ar = readLine().split(' ').map(arTemp => parseInt(arTemp, 10));

    let result = sockMerchant(ar);

    ws.write(result + "\n");

    ws.end();
}
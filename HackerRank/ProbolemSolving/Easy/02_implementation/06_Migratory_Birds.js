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
    
function migratoryBirds(arr) {    
    let counterObj = arr.reduce((acc, item) => {

        if (!acc[item]) acc[item] = 1;
        else acc[item]++;

        return acc;
    }, {})

    
    arr.length = 0
    for (let i in counterObj) arr.push(counterObj[i])
    
    let maxNumber = Math.max(...arr)
    for (let v in counterObj) {
        if (counterObj[v] === maxNumber) maxNumber = v
    }
    
    return maxNumber;
}

function main() {
    const ws = fs.createWriteStream(process.env.OUTPUT_PATH);

    const arrCount = parseInt(readLine().trim(), 10);

    const arr = readLine().replace(/\s+$/g, '').split(' ').map(arrTemp => parseInt(arrTemp, 10));

    const result = migratoryBirds(arr);

    ws.write(result + '\n');

    ws.end();
}
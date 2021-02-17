'use strict';

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

function main() {
    const n = parseInt(readLine().trim(), 10);

    let arr = Array(n).fill(''),
        firstPart = n / 2,
        secondPart = n - firstPart

    while (firstPart--) {
        let numStr = readLine().replace(/\s+$/g, '').split(' ');
        arr[numStr[0]] += `- `
    }
    
    while (secondPart--) {
        let numStr = readLine().replace(/\s+$/g, '').split(' ');
        arr[numStr[0]] += `${numStr[1]} `
    }
    
    console.log(arr.join(''))
}
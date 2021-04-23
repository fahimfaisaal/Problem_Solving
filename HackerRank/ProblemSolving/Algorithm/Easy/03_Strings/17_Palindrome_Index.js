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

function isPalindrome(str) {
    let len = Math.floor(str.length / 2),
        fromStart = 0,
        fromEnd = str.length - 1
    
    while (len--) {
        if (str[fromStart] !== str[fromEnd]) return false

        fromStart++, fromEnd--
    }

    return true;
}

function palindromeIndexArr(str) {
    let len = Math.floor(str.length / 2),
        fromStart = 0,
        fromEnd = str.length - 1

    let haveToDelete = new Array()

    while (len--) {
        if (str[fromStart] != str[fromEnd]) {
            haveToDelete.push(fromStart, fromEnd)
            break;
        }

        fromStart++, fromEnd--
    }

    return haveToDelete
}

function removeIndex(arr, str) {
    const indexOne = arr[0],
        cutLetter = str.filter((letter, index) => index !== indexOne)
        .join('')

    if (isPalindrome(cutLetter)) return indexOne
    else return arr[1]
}

function palindromeIndex(s) {    
    const string = s.split(''),
        arrOfIndex = palindromeIndexArr(string)
    
    if (!arrOfIndex.length) return -1
    return removeIndex(arrOfIndex, string);
}

function main() {
    const ws = fs.createWriteStream(process.env.OUTPUT_PATH);

    const q = parseInt(readLine(), 10);

    for (let qItr = 0; qItr < q; qItr++) {
        const s = readLine();

        let result = palindromeIndex(s);

        ws.write(result + "\n");
    }

    ws.end();
}
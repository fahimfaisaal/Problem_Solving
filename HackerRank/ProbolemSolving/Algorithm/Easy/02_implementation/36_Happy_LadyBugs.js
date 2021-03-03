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

function isAllSame(str) {
    for (let i = 1; i < str.length; i++) 
        if (str[0] !== str[i]) return false
        
    return true
}

function isHappy(str) {
    const string = str.map(item => item)
    let isDouble

    for (let i = 0; i < string.length - 1; i++) {
        if (str[i] === '') continue
        isDouble = 0

        for (let j = i + 1; j < string.length; j++) {
            if (string[i] === string[j]) {
                string[j] = ''
                isDouble = 1
            } else break
        }

        if (isDouble) string[i] = ''
    }

    if (string.every(letter => letter === '')) return true
    return false
}

function happyLadybugs(b) {
    const str = b.split(''),
        isEmptySpace = str.find(letter => letter === '_')
    
    if (str.length === 1 && !isEmptySpace) return "NO"
    else if (!isEmptySpace && isHappy(str))  return "YES"
    else if (isAllSame(str)) return "YES"
    else {
        let isMatch
        for (let i = 0; i < str.length; i++) {
            if (!str[i] || str[i] === '_') continue
            isMatch = 0

            for (let j = i + 1; j < str.length; j++) {
                if (str[i] === str[j]) {
                    str[j] = ''
                    isMatch = 1
                }
            }

            if (!isMatch) return "NO"
            str[i] = ''
        }

        if (isMatch && isEmptySpace) return "YES"
    
        return "NO"
    }
}

function main() {
    const ws = fs.createWriteStream(process.env.OUTPUT_PATH);

    const g = parseInt(readLine(), 10);

    for (let gItr = 0; gItr < g; gItr++) {
        const n = parseInt(readLine(), 10);

        const b = readLine();

        let result = happyLadybugs(b);

        ws.write(result + "\n");
    }

    ws.end();
}
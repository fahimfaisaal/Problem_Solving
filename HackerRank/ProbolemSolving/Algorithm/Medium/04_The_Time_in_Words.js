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

function timeInWords(h, m) {
    const timeWords = ['o\' clock', 'one', 'two', 'three', 'four', 'five', 'six', 'seven', 'eight', 'nine', 'ten', 'eleven', 'twelve', 'thirteen', 'fourteen', 'quarter', 'sixteen', 'seventeen', 'eighteen', 'nineteen', 'twenty', 'twenty one', 'twenty two', 'twenty three', 'twenty four', 'twenty five', 'twenty six', 'twenty seven', 'twenty eight', 'twenty nine', 'half']

    let pastOrTo = 'past',
        minuteWord = (m === 15 || m === 45 || m === 30) ? ' ' :
                     m > 9 ? ' minutes ' : ' minute '

    if (m > 30) {
        m = 60 - m
        h++
        pastOrTo = 'to'
    }

    if (!m) return `${(h == 5 ? 'five' : timeWords[h])} ${timeWords[0]}`
    
    return `${timeWords[m]}${minuteWord}${pastOrTo} ${h == 5 ? 'five' : timeWords[h]}`
}

function main() {
    const ws = fs.createWriteStream(process.env.OUTPUT_PATH);

    const h = parseInt(readLine(), 10);

    const m = parseInt(readLine(), 10);

    let result = timeInWords(h, m);

    ws.write(result + "\n");

    ws.end();
}
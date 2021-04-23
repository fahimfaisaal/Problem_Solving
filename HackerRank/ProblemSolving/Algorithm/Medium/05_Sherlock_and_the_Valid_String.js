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

function isValid(s) {
    let maxFrequency = -Infinity
    const frequencyCounts = s.split('').reduce((obj, letter) => {
        if (!obj[letter]) obj[letter] = 1
        else obj[letter]++

        if (obj[letter] > maxFrequency) maxFrequency = obj[letter]
        return obj
    }, {})
    
    let maxNumber = new Array(maxFrequency + 1).fill(0)
    for (let v in frequencyCounts)
        maxNumber[frequencyCounts[v]]++
    
    const maxKey = maxNumber.findIndex(item => item === Math.max(...maxNumber));
    for (let v in frequencyCounts)
        if (frequencyCounts[v] != maxKey) {        
            frequencyCounts[v]--
            break
        }
    
    const set = Object.values(frequencyCounts).reduce((set, num) => {
        if (num) set.add(num)
        return set
    }, new Set())

    if (set.size === 1) return "YES"
    
    return "NO"
}

function main() {
    const ws = fs.createWriteStream(process.env.OUTPUT_PATH);

    const s = readLine();

    let result = isValid(s);

    ws.write(result + "\n");

    ws.end();
}
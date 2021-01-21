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

const charCodes = {}
for (let i = 0, j = 97; i < 26; i++, j++)
    charCodes[String.fromCharCode(j)] = i + 1

function weightedUniformStrings(s, queries) {
    const string = s.split('');

    const codes =  string.reduce((obj, letter, index) => {
        let charCode = charCodes[letter],
            sum = charCode

        if (charCode) {
            for (let i = index + 1; i < string.length; i++) {
                if (string[i] === letter) {
                    string[i] = ''
                    sum += charCode
                    obj[sum] = sum
                } else break;
            }
            
            obj[charCode] = charCode;
        }

        return obj;

    }, {})

    const result = queries.reduce((arr, num) => {
        let isFind = codes[num]

        if (!isFind) arr.push('No')
        else arr.push('Yes')

        return arr
    }, [])
    
    return result
}

function main() {
    const ws = fs.createWriteStream(process.env.OUTPUT_PATH);

    const s = readLine();

    const queriesCount = parseInt(readLine(), 10);

    let queries = [];

    for (let i = 0; i < queriesCount; i++) {
        const queriesItem = parseInt(readLine(), 10);
        queries.push(queriesItem);
    }

    let result = weightedUniformStrings(s, queries);

    ws.write(result.join("\n") + "\n");

    ws.end();
}
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

function superReducedString(s) {
    while (true) {
        s = s.split('')

        let isMatch = 0

        for (let i = 1; i < s.length; i++) {
            if (s[i] === s[i - 1]) {
                s[i] = ''
                s[i - 1] = ''
            } else isMatch++
        }

        s = s.join('')
        
        if (isMatch === s.length - 1) return s
        if (s.length === 0) return "Empty String"
    }
}

function main() {
    const ws = fs.createWriteStream(process.env.OUTPUT_PATH);

    const s = readLine();

    const result = superReducedString(s);

    ws.write(result + '\n');

    ws.end();
}
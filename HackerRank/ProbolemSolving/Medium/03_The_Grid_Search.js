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

function remainMatch(G, P, i, j) {
    let num = ''

    for (let n = i + 1, l = 1; l < P.length; n++, l++)
        for (let k = j, m = 0; m < P[0].length; k++, m++)
            num += G[n][k]
    
    return num
}

function gridSearch(G, P) {
    const inputNumbers = P.join(''),
        inputLen = P[0].length,
        firstNumber = P[0]

    for (let i = 0; i < (G.length - P.length) + 1; i++) {
        let numbers = G[i].split('');

        for (let j = 0; j < (numbers.length - inputLen) + 1; j++) {
            let num = numbers.slice(j, j + inputLen).join('')   

            if (num === firstNumber)
                if (num + remainMatch(G, P, i, j) === inputNumbers) 
                    return "YES"
        }
    }
    
    return "NO"
}

function main() {
    const ws = fs.createWriteStream(process.env.OUTPUT_PATH);

    const t = parseInt(readLine(), 10);

    for (let tItr = 0; tItr < t; tItr++) {
        const RC = readLine().split(' ');

        const R = parseInt(RC[0], 10);

        const C = parseInt(RC[1], 10);

        let G = [];

        for (let i = 0; i < R; i++) {
            const GItem = readLine();
            G.push(GItem);
        }

        const rc = readLine().split(' ');

        const r = parseInt(rc[0], 10);

        const c = parseInt(rc[1], 10);

        let P = [];

        for (let i = 0; i < r; i++) {
            const PItem = readLine();
            P.push(PItem);
        }

        let result = gridSearch(G, P);

        ws.write(result + "\n");
    }

    ws.end();
}
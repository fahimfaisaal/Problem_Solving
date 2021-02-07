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

function isMatchFactor(factorNumber, lenA, factors) {
    for (let i = 1; i < lenA; i++)      
        if (!factors[i].some(number => number === factorNumber))
            return false
    
    return true;
}

function getNextFactor(num, from) {
    from++;

    while (num <= 100) {
        if (!(from % num))
            return from;
        from++;
    }

    return 0;
}


function getTotalX(a, b) {
    let minInB = b[0];
    for (let i = 1; i < b.length; i++)
        if (minInB > b[i]) minInB = b[i];

    let factors = [];
    for (let i = 0; i < a.length; i++) {
        factors.push([a[i]]);

        for (let j = 1, k = a[i]; k <= minInB; j++) {
            let fac = getNextFactor(a[i], k)
            factors[i].push(fac)
            k = factors[i][j];
        }
    }

    let j = 0,
        twoSets = 0;
    while (factors[0][j] <= minInB) {
        let factor = factors[0][j++],
            isDivision = true;

        if (isMatchFactor(factor, a.length, factors)) {
            for (let i = 0; i < b.length; i++)
                if (b[i] % factor)
                    isDivision = false;
            
            isDivision && twoSets++;
        }
    }

    return twoSets;
}

function main() {
    const ws = fs.createWriteStream(process.env.OUTPUT_PATH);

    const firstMultipleInput = readLine().replace(/\s+$/g, '').split(' ');

    const n = parseInt(firstMultipleInput[0], 10);

    const m = parseInt(firstMultipleInput[1], 10);

    const arr = readLine().replace(/\s+$/g, '').split(' ').map(arrTemp => parseInt(arrTemp, 10));

    const brr = readLine().replace(/\s+$/g, '').split(' ').map(brrTemp => parseInt(brrTemp, 10));

    const total = getTotalX(arr, brr);

    ws.write(total + '\n');

    ws.end();
}
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
    inputString = inputString.trim().split('\n').map(str => str.trim());

    main();
});

function readLine() {
    return inputString[currentLine++];
}

function timeConversion(time12) {
    let am = /AM/.test(time12),
        hour = time12[0] + time12[1],
        minutes = time12[3] + time12[4],
        seconds = time12[6] + time12[7],
        changeHour, time24

    changeHour = am && (+hour === 12) ? "00"
        : (+hour < 12) && !am ? String(+hour + 12)
        : hour

    return time24 = `${changeHour}:${minutes}:${seconds}`
}

function main() {
    const ws = fs.createWriteStream(process.env.OUTPUT_PATH);

    const s = readLine();

    let result = timeConversion(s);

    ws.write(result + "\n");

    ws.end();
}
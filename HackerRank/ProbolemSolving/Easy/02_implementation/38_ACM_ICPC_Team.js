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

function acmTeam(topic) {
    let knowns = new Array()
    
    for (let i = 0; i < topic.length - 1; i++)
        for (let j = i + 1; j < topic.length; j++) {
            let maxK = 0;
            
            for (let k = 0; k < topic[i].length; k++) {
                if (!+topic[i][k] && !+topic[j][k]) continue;
                maxK++;
            }
            
            knowns.push(maxK);            
        }
    
    let maxKnown = knowns[0];
    knowns.forEach(item => {
        if (item > maxKnown) maxKnown = item
    })
    
    let maxTeam = 0;    
    knowns.forEach(item => {
        if (maxKnown == item) maxTeam++
    })       
    
    return [maxKnown, maxTeam]
}

function main() {
    const ws = fs.createWriteStream(process.env.OUTPUT_PATH);

    const nm = readLine().split(' ');

    const n = parseInt(nm[0], 10);

    const m = parseInt(nm[1], 10);

    let topic = [];

    for (let i = 0; i < n; i++) {
        const topicItem = readLine();
        topic.push(topicItem);
    }

    let result = acmTeam(topic);

    ws.write(result.join("\n") + "\n");

    ws.end();
}
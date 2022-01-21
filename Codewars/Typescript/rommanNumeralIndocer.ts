interface Symbol {
    [key: number]: string;
}

const symbols: Symbol = {
    1000 : "M",
    900 : "CM",
    500 : "D",
    400 : "CD",
    100 : "C",
    90: "XC",
    50: "L",
    40: "XL",
    10: "X",
    9: "IX",
    5: "V",
    4: "IV",
    1: "I"
  }

export function solution(number: number): string {
    const romanKeys: string[] = Object.keys(symbols);
    let result: string = '';
    
    for (let i = romanKeys.length - 1; i > -1; i--) {
        const key: number = Number(romanKeys[i]);

        while (number >= key) {
            result += symbols[key];

            number -= key;
        }
    }

    return result;
}
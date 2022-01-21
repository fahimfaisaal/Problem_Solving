interface MorseCode {
    [key: string]: string
}

const MORSE_CODE: MorseCode =  { 
    '.-':     'a',
    '-...':   'b',
    '-.-.':   'c',
    '-..':    'd',
    '.':      'e',
    '..-.':   'f',
    '--.':    'g',
    '....':   'h',
    '..':     'i',
    '.---':   'j',
    '-.-':    'k',
    '.-..':   'l',
    '--':     'm',
    '-.':     'n',
    '---':    'o',
    '.--.':   'p',
    '--.-':   'q',
    '.-.':    'r',
    '...':    's',
    '-':      't',
    '..-':    'u',
    '...-':   'v',
    '.--':    'w',
    '-..-':   'x',
    '-.--':   'y',
    '--..':   'z',
    '.----':  '1',
    '..---':  '2',
    '...--':  '3',
    '....-':  '4',
    '.....':  '5',
    '-....':  '6',
    '--...':  '7',
    '---..':  '8',
    '----.':  '9',
    '-----':  '0',
};

export function decodeMorse(morseCode: string): string {
    const splitToMorseWord: string[] = morseCode.split(/\s{2}/);
    const decodeTheMorseWords: string = splitToMorseWord.reduce((decoded: string, morseWord: string) => {
        const splitMorseWordToLetters: string[] = morseWord.split(/\s/);
        const decodeWord: string = splitMorseWordToLetters.reduce((word: string, morseLetter: string) => (
            morseLetter ? word + MORSE_CODE[morseLetter as keyof MorseCode] : word
        ), '');
        
        return `${decoded} ${decodeWord}`
    }, '').trim();

    return decodeTheMorseWords;
}

console.log(decodeMorse('-----'));
function findMissingLetter(array: string[]): string {
  let missingLetter: string = '';
  
  for (let i = 0; i < array.length - 1; i++) {
    const charCodeOfCurrentIndex: number = array[i].charCodeAt(0);
    const charCodeOfNextIndex: number = array[i + 1].charCodeAt(0);
    const difference: number = Math.abs(charCodeOfCurrentIndex - charCodeOfNextIndex);
    
    if (difference > 1) {
        missingLetter = String.fromCharCode(charCodeOfCurrentIndex + 1);
        break;
    }
  }
    
  return missingLetter;
}
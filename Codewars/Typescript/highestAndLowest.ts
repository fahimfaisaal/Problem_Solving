function highAndLow(numbers: string): string {
    const arrayOfNumbers: number[] = numbers.split(/\s/).map(Number);
    return `${Math.max(...arrayOfNumbers)} ${Math.min(...arrayOfNumbers)}`;
}

function validatePin(pin: string): boolean {
    return /^(\d{6}|\d{4})$/.test(pin);
}
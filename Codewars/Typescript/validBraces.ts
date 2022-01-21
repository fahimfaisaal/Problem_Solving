function validBraces(braces: string): boolean {
    // braces length are never odd
    if (braces.length & 1) {
        return false;
    }

    const regex: RegExp = /(\(\))|(\{\})|(\[\])/g;
    
    while (regex.test(braces)) {
        // remove all pairs -> () | {} | []
        braces = braces.replace(regex, '');
    }
    
    return !braces.length;
}

console.log(validBraces("({})[({})]"));
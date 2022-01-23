
function validateSudoku(grid, callback) {
    const set = new Set();

    for (let row = 0; row < 9; row++) {
        for (let col = 0; col < 9; col++) {
            if (grid[row][col] !== '.') {
                const isValid = callback(set, row, col);

                if (!isValid) {
                    return false;
                }
            }
        }
    }

    return true;
}

function solution(grid) {
    return validateSudoku(grid, (set, row, col) => {
        const item = grid[row][col];
        const inRow = `${item} in row ${row}`;
        const inCol = `${item} in col ${col}`;
        const inSquare = `${item} in square ${parseInt(row / 3)} ${parseInt(col / 3)}`;

        if (set.has(inRow) || set.has(inCol) || set.has(inSquare)) {
            return false;
        }

        set.add(inRow);
        set.add(inCol);
        set.add(inSquare);

        return true;
    });
}

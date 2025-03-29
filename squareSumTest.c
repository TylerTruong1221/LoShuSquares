int isLoShuSquare(int square[3][3]) {
    int sum = square[0][0] + square[0][1] + square[0][2];
    if (square[1][0] + square[1][1] + square[1][2] == sum &&
        square[2][0] + square[2][1] + square[2][2] == sum &&
        square[0][0] + square[1][0] + square[2][0] == sum &&
        square[0][1] + square[1][1] + square[2][1] == sum &&
        square[0][2] + square[1][2] + square[2][2] == sum &&
        square[0][0] + square[1][1] + square[2][2] == sum &&
        square[0][2] + square[1][1] + square[2][0] == sum) {
        return 1;
    }
    
    else {
        return 0;
    }
}
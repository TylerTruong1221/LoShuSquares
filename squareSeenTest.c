int seenSquare(int square[3][3]) {
    int seen[9] = {0}; // Array to track seen numbers from 1-9, not including 0
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int num = square[i][j];    // Set num to the current number in the square

            // Check if the number is 1-9 and also if it has been seen before
            if (num < 1 || num > 9 || seen[num - 1]) {  
                return 0; // Return 0 if the number is invalid or already seen
            }
            seen[num - 1] = 1; // Mark the current number as seen
        }
    }
    return 1; // All numbers are valid and unique
}
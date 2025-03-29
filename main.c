#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int success = 0;
    int square[3][3] = {0};
    int count = 0;
    while (success != 1)
    {
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++){
                square[i][j] = rand() % 9 + 1; // Fill the square with random numbers from 1 to 9
            }
        }
        // Check if the square is a Lo Shu Square
        if (seenSquare(square) && isLoShuSquare(square)) {
            printf("Total failed count: %d\n", count);  // Print the number of failed attempts
            printf("Successful Lo Shu Square:\n");      // Print the successful square
            for (int i = 0; i < 3; i++) {
                printf("[ ");
                for (int j = 0; j < 3; j++) {
                    printf("%d ", square[i][j]);
                }
                printf("]\n");
            }
            success = 1;    // There was a success, so exit the loop
        } else {
            count++;    // Increment count
        }
    }
}
#include <stdio.h>

int main(void) {

    int loShu[3][3] = {
    {4, 9, 2},
    {3, 5, 7},
    {8, 1, 6}
    };

    int notLoShu[3][3] = {
    {0, 1, 2},
    {3, 4, 5},
    {6, 7, 8}
    };
    
    if (isLoShuSquare(loShu) && seenSquare(loShu)) {
        printf("Square 1 is a Lo Shu Square.\n");
    } else {
        printf("Square 1 is not a Lo Shu Square.\n");
    }
    
    if (isLoShuSquare(notLoShu) && seenSquare(notLoShu)) {
        printf("Square 2 is a Lo Shu Square.\n");
    } else {
        printf("Square 2 is not a Lo Shu Square.\n");
    }
}
#include <stdio.h>

int main() {
    // i. Define an array data structure (implicitly done in C)

    // ii. Declare and initialize a 2D array named scores
    int scores[2][2] = {
        {65, 92},
        {35, 70}
    };

    // iii. Print the elements of the array using a nested for loop
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", scores[i][j]);
        }
        printf("\n");
    }

    return 0;
}

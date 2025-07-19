#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Structure to store row and column for each character
typedef struct {
    int row;
    int col;
} Position;

// Function to calculate scatter value
int solveNPuzzle(char originalMat[4][5], char updatedMat[4][5]) {
    Position pos[128]; // ASCII table size for direct access

    // Map each character to its original position
    for (int r = 0; r < 4; ++r) {
        for (int c = 0; c < 4; ++c) {
            pos[(int)originalMat[r][c]].row = r;
            pos[(int)originalMat[r][c]].col = c;
        }
    }

    int scatter = 0;
    // Calculate Manhattan distance for each character
    for (int r = 0; r < 4; ++r) {
        for (int c = 0; c < 4; ++c) {
            char ch = updatedMat[r][c];
            scatter += abs(pos[(int)ch].row - r) + abs(pos[(int)ch].col - c);
        }
    }
    return scatter;
}

int main() {
    char originalMat[4][5] = {"ABCD", "EFGH", "IJKL", "MNO."};
    char updatedMat[4][5];

    // Read 4 lines of input for the updated arrangement
    for (int i = 0; i < 4; ++i) {
        scanf("%s", updatedMat[i]);
    }

    printf("%d\n", solveNPuzzle(originalMat, updatedMat));
    return 0;
}
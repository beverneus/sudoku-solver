#include <iostream>
#include <vector>

// Sudoku puzzle to be solved, empty squares are marked with 0
int puzzle[9][9] = {
    {0, 0, 0, 2, 6, 0, 7, 0, 1},
    {6, 8, 0, 0, 7, 0, 0, 9, 0},
    {1, 9, 0, 0, 0, 4, 5, 0, 0},
    {8, 2, 0, 1, 0, 0, 0, 4, 0},
    {0, 0, 4, 6, 0, 2, 9, 0, 0},
    {0, 5, 0, 0, 0, 3, 0, 2, 8},
    {0, 0, 9, 3, 0, 0, 0, 7, 4},
    {0, 4, 0, 0, 5, 0, 0, 3, 6},
    {7, 0, 3, 0, 1, 8, 0, 0, 0}
};

void getEmptyCells(std::vector<std::pair<int,int>>& emptyCells) {
    for (int i=0; i<9; i++) {
        for (int j=0; j<9; j++) {
            if (puzzle[i][j] == 0) {
                emptyCells.push_back({i, j});
            } 
        }
    }
}

int main() {
    // get coordinates of empty cells
    std::vector<std::pair<int, int>> emptyCells;
    emptyCells.reserve(64); // reserve space for 64 elements, the maximum amount of empty cells in a sudoku puzzle
    getEmptyCells(emptyCells);

    return 0;
}
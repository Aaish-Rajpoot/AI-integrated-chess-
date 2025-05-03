#include "chess.h"
#include <iostream>
using namespace std;

Board::Board() {
    grid = vector<vector<char>>(8, vector<char>(8, '.'));
    grid[0][0] = grid[0][7] = 'R'; // Example: Rooks
}

void Board::display() {
    for (auto& row : grid) {
        for (char cell : row)
            cout << cell << " ";
        cout << endl;
    }
}

bool Board::makeMove(string move) {
    cout << "AI evaluating move: " << move << endl;
    return true;
}


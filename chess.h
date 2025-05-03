
#ifndef CHESS_H
#define CHESS_H
#include <string>
#include <vector>
using namespace std;

class Board {
    vector<vector<char>> grid;
public:
    Board();
    void display();
    bool makeMove(string move);
};

#endif


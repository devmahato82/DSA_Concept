#include <iostream>
#include <string>
using namespace std;

char board[8][8];

// Initialize chess board
void initializeBoard() {
    string initial[8] = {
        "rnbqkbnr", // Black major pieces
        "pppppppp", // Black pawns
        "        ", // Empty rows
        "        ",
        "        ",
        "        ",
        "PPPPPPPP", // White pawns
        "RNBQKBNR"  // White major pieces
    };

    for (int i = 0; i < 8; i++)
        for (int j = 0; j < 8; j++)
            board[i][j] = initial[i][j];
}

// Display chess board
void displayBoard() {
    cout << "  a b c d e f g h\n";
    cout << " -----------------\n";
    for (int i = 0; i < 8; i++) {
        cout << 8 - i << "|";
        for (int j = 0; j < 8; j++) {
            cout << board[i][j] << " ";
        }
        cout << "|" << 8 - i << endl;
    }
    cout << " -----------------\n";
    cout << "  a b c d e f g h\n";
}

// Convert algebraic notation (e.g., "e2") to board indices
bool notationToIndex(string pos, int &row, int &col) {
    if (pos.size() != 2) return false;
    col = pos[0] - 'a';
    row = 8 - (pos[1] - '0');
    return (row >= 0 && row < 8 && col >= 0 && col < 8);
}

// Move piece
bool movePiece(string from, string to) {
    int r1, c1, r2, c2;
    if (!notationToIndex(from, r1, c1) || !notationToIndex(to, r2, c2))
        return false;

    char piece = board[r1][c1];
    if (piece == ' ') return false; // No piece to move

    // Basic move (no rule enforcement yet)
    board[r2][c2] = piece;
    board[r1][c1] = ' ';
    return true;
}

int main() {
    initializeBoard();
    string from, to;
    char currentPlayer = 'W';

    cout << "♟️ Welcome to Console Chess!" << endl;
    displayBoard();

    while (true) {
        cout << (currentPlayer == 'W' ? "White" : "Black") 
             << " move (e.g., e2 e4): ";
        cin >> from >> to;

        if (movePiece(from, to)) {
            displayBoard();
            currentPlayer = (currentPlayer == 'W') ? 'B' : 'W';
        } else {
            cout << "Invalid move! Try again." << endl;
        }
    }
    return 0;
}
#include <iostream>
#include "GameBoard.cpp"
#include "GamePiece.cpp"

using namespace std;

int main() {
    GameBoard gameBoard;
    
    // Add some pieces to the board
    gameBoard.addPiece(new GamePiece("Red", 1));
    gameBoard.addPiece(new GamePiece("Blue", 5));
    
    cout << "Original Board:" << endl;
    gameBoard.showBoardState();

    // Create a checkpoint by cloning the board
    GameBoard* copiedBoard = gameBoard.clone();

    cout << "Copied Board:" << endl;
    copiedBoard->showBoardState();

    // Clean up
    delete copiedBoard;

    return 0;
}

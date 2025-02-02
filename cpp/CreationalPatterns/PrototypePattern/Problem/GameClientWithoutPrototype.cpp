#include "GameBoard.cpp"

int main() {
    GameBoard gameBoard;
    gameBoard.addPiece(GamePiece("Red", 1));
    gameBoard.addPiece(GamePiece("Blue", 5));
    gameBoard.showBoardState();

    // Checkpoint this state
    GameBoard copiedBoard;
    for (const auto& piece : gameBoard.getPieces()) {
        copiedBoard.addPiece(GamePiece(piece.getColor(), piece.getPosition()));
    }

    std::cout << "Copied Board" << std::endl;
    copiedBoard.showBoardState();

    return 0;
} 
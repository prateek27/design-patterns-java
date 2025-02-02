#pragma once
#include <vector>
#include <iostream>
#include "GamePiece.cpp"

class GameBoard {
private:
    std::vector<GamePiece> pieces;

public:
    void addPiece(const GamePiece& piece) {
        pieces.push_back(piece);
    }

    const std::vector<GamePiece>& getPieces() const {
        return pieces;
    }

    void showBoardState() const {
        for (const auto& piece : pieces) {
            std::cout << piece.toString() << std::endl;
        }
    }
}; 
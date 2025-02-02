#pragma once
#include <iostream>
#include <vector>
#include <memory>
#include "GamePiece.cpp"  // Include the GamePiece class for GameBoard to work with

using namespace std;

class GameBoard {
private:
    vector<unique_ptr<GamePiece> > pieces;  // Added space between > >

public:
    // Add a GamePiece to the board
    void addPiece(GamePiece* piece) {
        pieces.push_back(unique_ptr<GamePiece>(piece));  // Storing as unique_ptr
    }

    // Show the current board state
    void showBoardState() const {
        for (const auto& piece : pieces) {
            cout << *piece << endl;  // Overloaded << operator for GamePiece
        }
    }

    // Clone the current board, making deep copies of each piece
    GameBoard* clone() const {
        GameBoard* newBoard = new GameBoard();
        for (const auto& piece : pieces) {
            newBoard->addPiece(piece->clone());  // Cloning each GamePiece
        }
        return newBoard;
    }

    ~GameBoard() = default;
};
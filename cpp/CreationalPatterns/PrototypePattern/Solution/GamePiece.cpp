#pragma once
#include <iostream>
#include <string>
#include "Prototype.cpp"

using namespace std;

class GamePiece : public Prototype<GamePiece> {
private:
    string color;
    int position;

public:
    GamePiece(string color, int position) : color(color), position(position) {}

    string getColor() const {
        return color;
    }

    int getPosition() const {
        return position;
    }

    void setColor(string color) {
        this->color = color;
    }

    void setPosition(int position) {
        this->position = position;
    }

    // Add operator<< overload as friend function
    friend ostream& operator<<(ostream& os, const GamePiece& piece) {
        os << piece.toString();
        return os;
    }

    string toString() const {
        return "GamePiece{color='" + color + "', position=" + to_string(position) + "}";
    }

    GamePiece* clone() const override {
        return new GamePiece(this->color, this->position);
    }
};

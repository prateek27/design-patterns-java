#pragma once
#include <string>

class GamePiece {
private:
    std::string color;
    int position;

public:
    GamePiece(std::string color, int position) 
        : color(color), position(position) {}

    std::string getColor() const { return color; }
    int getPosition() const { return position; }
    
    void setColor(const std::string& color) { this->color = color; }
    void setPosition(int position) { this->position = position; }

    std::string toString() const {
        return "GamePiece{color='" + color + "', position=" + std::to_string(position) + "}";
    }
}; 
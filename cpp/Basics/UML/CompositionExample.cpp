#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Room class
class Room {
private:
    string name;

public:
    // Constructor
    Room(string name) {
        this->name = name;
    }

    // Getter for name (const-correct)
    string getName() const {  // Marked as const
        return name;
    }
};

// House class (Composition relationship)
class House {
private:
    vector<Room> rooms;

public:
    // Constructor
    House() {
        rooms.push_back(Room("Living Room"));
        rooms.push_back(Room("Bedroom"));
    }

    // Method to show rooms
    void showRooms() const {  // Marked as const because it doesn't modify the House object
        for (const auto& room : rooms) {
            cout << room.getName() << endl;
        }
    }
};

int main() {
    House house;

    // If the house is destroyed, the rooms are also destroyed
    house.showRooms(); // Output: Living Room \n Bedroom

    return 0;
}
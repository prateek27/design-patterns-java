#include <iostream>
#include <string>

using namespace std;

// User class
class User {
private:
    string name;

public:
    User(const string& name) : name(name) {}

    void sendMessage(const string& msg, User& recipient) {
        cout << name << " sending " << msg << " to " << recipient.getName() << endl;
    }

    string getName() const {
        return name;
    }
};

// Main function
int main() {
    User rahul("Rahul");
    User amit("Amit");
    User neha("Neha");

    rahul.sendMessage("Hello", amit);
    rahul.sendMessage("Hello", neha);

    return 0;
}
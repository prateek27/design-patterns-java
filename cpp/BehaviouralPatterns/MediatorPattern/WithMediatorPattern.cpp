#include <iostream>
#include <vector>
#include <string>

using namespace std;

class ChatUser;

// ChatMediator interface
class ChatMediator {
public:
    virtual void sendMessage(const string& msg, ChatUser* user) = 0;
    virtual void addUser(ChatUser* user) = 0;
    virtual ~ChatMediator() {}
};

// ChatUser class
class ChatUser {
private:
    string name;
    ChatMediator* chatMediator;

public:
    ChatUser(const string& name, ChatMediator* chatMediator) : name(name), chatMediator(chatMediator) {}

    void sendMessage(const string& msg) {
        cout << name << " is sending a message: " << msg << endl;
        chatMediator->sendMessage(msg, this);
    }

    string getName() const {
        return name;
    }

    void receiveMessage(const string& msg, ChatUser* sender) {
        cout << name << " received message: '" << msg << "' from " << sender->getName() << endl;
    }
};

// Concrete Mediator (ChatRoom)
class ChatRoom : public ChatMediator {
private:
    vector<ChatUser*> users;

public:
    void sendMessage(const string& msg, ChatUser* sender) override {
        for (ChatUser* user : users) {
            if (user != sender) {
                user->receiveMessage(msg, sender);
            }
        }
    }

    void addUser(ChatUser* user) override {
        users.push_back(user);
    }
};

// Main function
int main() {
    ChatMediator* chatRoom = new ChatRoom();

    ChatUser* rahul = new ChatUser("Rahul", chatRoom);
    ChatUser* amit = new ChatUser("Amit", chatRoom);
    ChatUser* neha = new ChatUser("Neha", chatRoom);

    chatRoom->addUser(rahul);
    chatRoom->addUser(amit);
    chatRoom->addUser(neha);

    amit->sendMessage("Hi everyone");

    delete rahul;
    delete amit;
    delete neha;
    delete chatRoom;

    return 0;
}
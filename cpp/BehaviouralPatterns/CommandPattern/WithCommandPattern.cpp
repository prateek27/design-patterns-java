#include <iostream>

class Command {
public:
    virtual void execute() = 0;
    virtual ~Command() = default;
};

class TextEditorII {
public:
    void boldText() {
        std::cout << "Text has been bolded." << std::endl;
    }

    void italicizeText() {
        std::cout << "Text has been italicized." << std::endl;
    }

    void underlineText() {
        std::cout << "Text has been underlined." << std::endl;
    }

    void changeColor() {
        std::cout << "Text color has been changed." << std::endl;
    }
};

class BoldCommand : public Command {
private:
    TextEditorII* editor;

public:
    BoldCommand(TextEditorII* editor) : editor(editor) {}

    void execute() override {
        editor->boldText();
    }
};

class ChangeColorCommand : public Command {
private:
    TextEditorII* editor;

public:
    ChangeColorCommand(TextEditorII* editor) : editor(editor) {}

    void execute() override {
        editor->changeColor();
    }
};

class Button {
private:
    Command* command;

public:
    void setCommand(Command* cmd) {
        command = cmd;
    }

    void click() {
        if (command) {
            command->execute();
        }
    }
};

int main() {
    TextEditorII editorII;

    Button button;
    
    BoldCommand boldCmd(&editorII);
    ChangeColorCommand colorCmd(&editorII);
    
    button.setCommand(&boldCmd);    
    button.setCommand(&colorCmd);
    button.click();

    return 0;
}
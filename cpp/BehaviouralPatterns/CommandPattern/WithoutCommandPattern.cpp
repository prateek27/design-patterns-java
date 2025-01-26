#include <iostream>

class TextEditor {
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
};

class BoldButton {
private:
    TextEditor* editor;

public:
    BoldButton(TextEditor* editor) : editor(editor) {}

    void click() {
        editor->boldText();
    }
};

class ItalicButton {
private:
    TextEditor* editor;

public:
    ItalicButton(TextEditor* editor) : editor(editor) {}

    void click() {
        editor->italicizeText();
    }
};

int main() {
    TextEditor editor;
    BoldButton boldButton(&editor);
    ItalicButton italicButton(&editor);

    boldButton.click();
    italicButton.click();

    return 0;
}
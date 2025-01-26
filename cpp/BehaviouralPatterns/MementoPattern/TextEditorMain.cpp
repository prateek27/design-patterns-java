#include <iostream>
#include "TextEditor.cpp"
#include "Caretaker.cpp" 

int main() {
    TextEditor editor;
    Caretaker caretaker;

    editor.write("A");
    caretaker.saveState(editor);

    editor.write("B");
    caretaker.saveState(editor);

    editor.write("C");
    caretaker.saveState(editor);

    caretaker.undo(editor);

    std::cout << editor.getContent() << std::endl;

    return 0;
}
#include <stack>
#include "EditorMemento.cpp"
#include "TextEditor.cpp"

class Caretaker {
private:
    std::stack<EditorMemento> history;

public:
    void saveState(TextEditor& editor) {
        history.push(editor.save());
    }

    void undo(TextEditor& editor) {
        if (history.size() > 1) {
            history.pop();
            EditorMemento memento = history.top();
            editor.restore(memento);
        }
    }
};
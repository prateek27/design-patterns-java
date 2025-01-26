#ifndef TEXTEDITOR_CPP
#define TEXTEDITOR_CPP

#include <string>
#include "EditorMemento.cpp"

class TextEditor {
private:
    std::string content;

public:
    void write(const std::string& text) {
        content = text;
    }

    EditorMemento save() const;
    void restore(const EditorMemento& memento);

    std::string getContent() const {
        return content;
    }
};

EditorMemento TextEditor::save() const {
    return EditorMemento(content);
}

void TextEditor::restore(const EditorMemento& memento) {
    content = memento.getContent();
}

#endif
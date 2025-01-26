#ifndef EDITORMEMENTO_CPP
#define EDITORMEMENTO_CPP

#include <string>

class EditorMemento {
private:
    std::string content;

public:
    EditorMemento(const std::string& text) : content(text) {}
    
    std::string getContent() const {
        return content;
    }
};

#endif
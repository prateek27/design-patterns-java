#include <iostream>
using namespace std;

// Abstract Product Interfaces
class Button {
public:
    virtual void render() = 0;
    virtual ~Button() {}
};

class ScrollBar {
public:
    virtual void scroll() = 0;
    virtual ~ScrollBar() {}
};

// Windows UI Components
class WindowsButton : public Button {
public:
    void render() override {
        cout << "Rendering Windows button" << endl;
    }
};

class WindowsScrollBar : public ScrollBar {
public:
    void scroll() override {
        cout << "Scrolling Windows scrollbar" << endl;
    }
};

// Mac UI Components
class MacOSButton : public Button {
public:
    void render() override {
        cout << "Rendering MacOS button" << endl;
    }
};

class MacOSScrollBar : public ScrollBar {
public:
    void scroll() override {
        cout << "Scrolling MacOS scrollbar" << endl;
    }
};

// Abstract Factory Interface
class UIFactory {
public:
    virtual Button* createButton() = 0;
    virtual ScrollBar* createScrollBar() = 0;
    virtual ~UIFactory() {}
};

// Concrete Implementations
class WindowsFactory : public UIFactory {
public:
    Button* createButton() override {
        return new WindowsButton();
    }

    ScrollBar* createScrollBar() override {
        return new WindowsScrollBar();
    }
};

class MacOSFactory : public UIFactory {
public:
    Button* createButton() override {
        return new MacOSButton();
    }

    ScrollBar* createScrollBar() override {
        return new MacOSScrollBar();
    }
};

// Application class
class Application {
private:
    Button* button;
    ScrollBar* scrollBar;

public:
    Application(UIFactory* factory) {
        button = factory->createButton();
        scrollBar = factory->createScrollBar();
    }

    void renderUI() {
        button->render();
        scrollBar->scroll();
    }

    ~Application() {
        delete button;
        delete scrollBar;
    }
};

// Main function
int main() {
    UIFactory* macFactory = new MacOSFactory();
    Application app(macFactory);
    app.renderUI();

    delete macFactory;
    return 0;
}
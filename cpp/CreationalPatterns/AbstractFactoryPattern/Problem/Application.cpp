#include <iostream>

using namespace std;

// Windows UI Components
class WindowsButton {
public:
    void render() {
        cout << "Rendering windows button" << endl;
    }
};

class WindowsScrollBar {
public:
    void render() {
        cout << "Rendering windows scrollbar" << endl;
    }
};

// Mac UI Components
class MacOSButton {
public:
    void render() {
        cout << "Rendering MacOS button" << endl;
    }
};

class MacOSScrollBar {
public:
    void render() {
        cout << "Rendering MacOS scrollbar" << endl;
    }
};

// Main Application
int main() {
    // Windows UI
    WindowsButton button;
    WindowsScrollBar scrollBar;
    
    // Render components
    button.render();
    scrollBar.render();

    return 0;
}

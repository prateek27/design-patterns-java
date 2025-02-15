#include "ReadOnlyFile.cpp"

int main() {
    File* file = new ReadOnlyFile();
    file->read();  // works fine
    try {
        file->write();  // throwing an exception, violation of LSP
    } catch(const std::runtime_error& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }
    
    delete file;
    return 0;
} 
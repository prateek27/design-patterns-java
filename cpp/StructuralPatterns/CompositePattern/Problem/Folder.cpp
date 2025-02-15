#ifndef FOLDER_CPP
#define FOLDER_CPP

#include <string>
#include <vector>
#include <iostream>
#include "File.cpp"

class Folder {
private:
    std::string name;
    std::vector<File*> files;

public:
    Folder(const std::string& name) : name(name) {}

    void addFile(File* file) {
        files.push_back(file);
    }

    void showDetails() {
        std::cout << "Folder: " << name << std::endl;
        for(File* file : files) {
            file->showDetails();
        }
    }

    ~Folder() {
        for(File* file : files) {
            delete file;
        }
    }
};

#endif 
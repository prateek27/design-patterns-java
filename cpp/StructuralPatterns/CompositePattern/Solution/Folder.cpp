#ifndef FOLDER_CPP
#define FOLDER_CPP

#include <string>
#include <vector>
#include <iostream>
#include "FileSystemComponent.cpp"

class Folder : public FileSystemComponent {
private:
    std::string name;
    std::vector<FileSystemComponent*> components;

public:
    Folder(const std::string& name) : name(name) {}

    void addComponent(FileSystemComponent* component) {
        components.push_back(component);
    }

    void showDetails() override {
        std::cout << "Folder: " << name << std::endl;
        for(FileSystemComponent* component : components) {
            component->showDetails();
        }
    }

    ~Folder() {
        for(FileSystemComponent* component : components) {
            delete component;
        }
    }
};

#endif 
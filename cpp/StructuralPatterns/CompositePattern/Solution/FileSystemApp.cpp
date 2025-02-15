#include "Folder.cpp"
#include "File.cpp"

int main() {
    FileSystemComponent* file1 = new File("File1.txt");
    FileSystemComponent* file2 = new File("File2.txt");
    
    Folder* folder = new Folder("Documents");
    folder->addComponent(file1);
    folder->addComponent(file2);

    // Subfolder
    Folder* subfolder = new Folder("Subfolder");
    FileSystemComponent* file3 = new File("File3.txt");
    
    subfolder->addComponent(file3);
    folder->addComponent(subfolder);

    folder->showDetails();

    // Cleanup is handled by Folder destructor
    delete folder;

    return 0;
} 
#include "Folder.cpp"

int main() {
    File* file1 = new File("File1.txt");
    File* file2 = new File("File2.txt");
    
    Folder folder("Documents");
    folder.addFile(file1);
    folder.addFile(file2);

    folder.showDetails();

    return 0;
} 
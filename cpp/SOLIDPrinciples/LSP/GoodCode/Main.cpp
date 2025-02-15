#include "ReadOnlyFile.cpp"
#include "WritableFile.cpp"

void readAnyFile(Readable* file) {
    file->read();
}

int main() {
    Readable* readableFile = new ReadOnlyFile();
    readableFile->read();

    WritableFile* writableFile = new WritableFile();
    writableFile->read();
    writableFile->write();

    readAnyFile(readableFile);
    readAnyFile(writableFile);

    delete readableFile;
    delete writableFile;

    return 0;
} 
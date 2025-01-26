#include <iostream>

class CSVParser {
public:
    void parse() {
        openFile();
        // CSV Specific Parsing Logic
        std::cout << "Parsing a CSV File" << std::endl;
        closeFile();
    }

private:
    void openFile() {
        std::cout << "Opening File" << std::endl;
    }

    void closeFile() {
        std::cout << "Closing File" << std::endl;
    }
};

class JSONParser {
public:
    void parse() {
        openFile();
        // JSON Specific Parsing Logic
        std::cout << "Parsing a JSON File" << std::endl;
        closeFile();
    }

private:
    void openFile() {
        std::cout << "Opening File" << std::endl;
    }

    void closeFile() {
        std::cout << "Closing File" << std::endl;
    }
};

int main() {
    CSVParser csvParser;
    csvParser.parse();

    JSONParser jsonParser;
    jsonParser.parse();

    return 0;
}
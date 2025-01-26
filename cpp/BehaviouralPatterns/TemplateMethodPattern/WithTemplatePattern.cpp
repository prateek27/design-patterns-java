#include <iostream>

// Abstract class DataParser
class DataParser {
public:
    // Template Method defines the steps of the algorithm
    void parse() {
        openFile();
        parseData();
        closeFile();
    }

protected:
    void openFile() {
        std::cout << "Opening File" << std::endl;
    }

    void closeFile() {
        std::cout << "Closing File" << std::endl;
    }

    virtual void parseData() = 0;  // Pure virtual function
};

// CSV Parser
class CSVParserII : public DataParser {
protected:
    void parseData() override {
        std::cout << "Parsing CSV Data" << std::endl;
    }
};

// JSON Parser
class JSONParserII : public DataParser {
protected:
    void parseData() override {
        std::cout << "Parsing JSON Data" << std::endl;
    }
};

int main() {
    DataParser* csvParser = new CSVParserII();
    DataParser* jsonParser = new JSONParserII();

    // Using Template Method
    csvParser->parse();
    jsonParser->parse();

    delete csvParser;
    delete jsonParser;

    return 0;
}
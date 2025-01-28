#include <iostream>
#include <string>

using namespace std;

class AppSettings {
private:
    string databaseUrl;
    string apiKey;

public:
    // Constructor
    AppSettings() {
        // Simulating reading settings from a config file
        databaseUrl = "jdbc:mysql://localhost:3306/mydatabase";
        apiKey = "12345-ABCDE";
    }

    string getDatabaseUrl() const {
        return databaseUrl;
    }

    string getApiKey() const {
        return apiKey;
    }
};
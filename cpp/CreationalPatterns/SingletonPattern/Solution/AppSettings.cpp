#include <iostream>
#include <string>

using namespace std;

class AppSettings {
private:
    static AppSettings* instance;
    string databaseUrl;
    string apiKey;

    // Step 2: Private constructor to prevent direct object creation
    AppSettings() {
        databaseUrl = "jdbc:mysql://localhost:3306/mydatabase";
        apiKey = "12345-ABCDE";
    }

public:
    // Step 3: Public static method to get the single instance
    static AppSettings* getInstance() {
        if (instance == nullptr) {
            instance = new AppSettings();
        }
        return instance;
    }

    string getDatabaseUrl() const {
        return databaseUrl;
    }

    string getApiKey() const {
        return apiKey;
    }
};
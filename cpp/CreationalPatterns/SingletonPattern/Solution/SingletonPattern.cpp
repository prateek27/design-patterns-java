#include <iostream>
#include "AppSettings.cpp"

using namespace std;

// Initialize static instance
AppSettings* AppSettings::instance = nullptr;

int main() {
    AppSettings* appSettings = AppSettings::getInstance();
    AppSettings* appSettingsCopy = AppSettings::getInstance();

    cout << appSettingsCopy->getApiKey() << endl;
    cout << appSettings->getApiKey() << endl;

    // Check if both instances are the same
    cout << boolalpha << (appSettings == appSettingsCopy) << endl; // Should print true

    return 0;
}
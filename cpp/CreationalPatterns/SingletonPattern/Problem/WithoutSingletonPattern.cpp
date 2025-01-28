#include <iostream>
#include <string>
#include "AppSettings.cpp"

using namespace std;

int main() {
    AppSettings appSettings;
    AppSettings appSettingsCopy;

    cout << appSettingsCopy.getApiKey() << endl;
    cout << appSettings.getApiKey() << endl;

    // More memory usage (Different objects)
    cout << boolalpha << (&appSettings == &appSettingsCopy) << endl;

    return 0;
}
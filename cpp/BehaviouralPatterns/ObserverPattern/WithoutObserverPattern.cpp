#include <iostream>
#include <string>

// Display Device
class DisplayDevice {
public:
    void showTemp(float temp) {
        std::cout << "Current Temp: " << temp << " C" << std::endl;
    }
};

// Weather Station
class WeatherStation {
private:
    float temperature;
    DisplayDevice* displayDevice; // Pointer to the display device

public:
    WeatherStation(DisplayDevice* device) : displayDevice(device), temperature(0) {}

    void setTemperature(float temp) {
        temperature = temp;
        notifyDevice();
    }

    void notifyDevice() {
        displayDevice->showTemp(temperature);
    }
};

int main() {
    DisplayDevice device;
    WeatherStation station(&device); // Passing pointer to display device

    // Tight Coupling between station and the device
    station.setTemperature(26);
    station.setTemperature(30);

    return 0;
}
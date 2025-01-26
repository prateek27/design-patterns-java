#include <iostream>
#include <vector>
#include <string>

// Observer Interface
class Observer {
public:
    virtual void update(float temp) = 0;
};

// Subject Interface
class Subject {
public:
    virtual void attach(Observer* obs) = 0;
    virtual void detach(Observer* obs) = 0;
    virtual void notifyObservers() = 0;
};

// Weather Station
class WeatherStationIn : public Subject {
private:
    float temperature;
    std::vector<Observer*> observerList;

public:
    WeatherStationIn() : temperature(0) {}

    void setTemperature(float temp) {
        temperature = temp;
        notifyObservers();
    }

    void attach(Observer* obs) override {
        observerList.push_back(obs);
    }

    void detach(Observer* obs) override {
        auto it = std::find(observerList.begin(), observerList.end(), obs);
        if (it != observerList.end()) {
            observerList.erase(it);
        }
    }

    void notifyObservers() override {
        for (auto& obs : observerList) {
            obs->update(temperature);  // Runtime Polymorphism
        }
    }
};

// Display Device
class DisplayDeviceIn : public Observer {
private:
    std::string name;

public:
    DisplayDeviceIn(const std::string& deviceName) : name(deviceName) {}

    void update(float temp) override {
        std::cout << "Temp on " << name << " device is " << temp << std::endl;
    }
};

// Mobile Device
class MobileDevice : public Observer {
public:
    void update(float temp) override {
        std::cout << "Temp on mobile is " << temp << std::endl;
    }
};

int main() {
    // Create a Publisher
    WeatherStationIn weatherStationIn;

    // Create subscribers
    DisplayDeviceIn device("SamsungLCD");
    MobileDevice mobileDevice;

    // Attach
    weatherStationIn.attach(&device);
    weatherStationIn.attach(&mobileDevice);

    // Set Temp
    weatherStationIn.setTemperature(25);

    // Detach
    weatherStationIn.detach(&mobileDevice);

    weatherStationIn.setTemperature(26);

    return 0;
}
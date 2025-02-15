#ifndef LOCATION_CPP
#define LOCATION_CPP

#include <cmath>

class Location {
private:
    double latitude;
    double longitude;

public:
    Location(double lat, double lon) : latitude(lat), longitude(lon) {}

    double getLatitude() const {
        return latitude;
    }

    double getLongitude() const {
        return longitude;
    }

    double calcDistance(const Location& two) const {
        double dx = this->getLatitude() - two.getLatitude();
        double dy = this->getLongitude() - two.getLongitude();
        return std::sqrt(dx * dx + dy * dy);
    }
};

#endif 
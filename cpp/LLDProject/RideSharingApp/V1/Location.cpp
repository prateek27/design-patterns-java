#ifndef LOCATION_CPP
#define LOCATION_CPP

#include <string>

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
};

#endif 
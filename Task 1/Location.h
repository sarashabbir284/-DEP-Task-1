#pragma once
#ifndef LOCATION
#define LOCATION
using namespace std;

#include <string>

class Location {
public:
    Location(const string& city, const string& country, double latitude, double longitude);
    string getCity() const;
    string getCountry() const;
    double getLatitude() const;
    double getLongitude() const;

private:
   string city;
string country;
    double latitude;
    double longitude;
};

#endif 

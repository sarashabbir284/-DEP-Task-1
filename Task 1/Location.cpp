#include "Location.h"
using namespace std;

Location::Location(const string& city, const string& country, double latitude, double longitude)
    : city(city), country(country), latitude(latitude), longitude(longitude) {}

string Location::getCity() const { return city; }
string Location::getCountry() const { return country; }
double Location::getLatitude() const { return latitude; }
double Location::getLongitude() const { return longitude; }
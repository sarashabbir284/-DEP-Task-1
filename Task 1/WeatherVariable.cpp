#include "WeatherVariable.h"
using namespace std;

WeatherVariable::WeatherVariable(const string& name, double value, const string& unit)
    : name(name), value(value), unit(unit) {}

string WeatherVariable::getName() const { return name; }
double WeatherVariable::getValue() const { return value; }
string WeatherVariable::getUnit() const { return unit; }
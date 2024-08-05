#pragma once
#ifndef WEATHERVARIABLE
#define WEATHERVARIABLE

#include <string>
using namespace std;

class WeatherVariable {
public:
    WeatherVariable(const string& name, double value, const string& unit);
    std::string getName() const;
    double getValue() const;
    string getUnit() const;

private:
    string name;
    double value;
    string unit;
};

#endif 

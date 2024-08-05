#pragma once
#ifndef WEATHERFORECASTINGSYSTEM
#define WEATHERFORECASTINGSYSTEM
using namespace std;

#include "Location.h"
#include "WeatherVariable.h"
#include <vector>

class WeatherForecastingSystem {
public:
    virtual void fetchWeatherData(const Location& location) = 0;
    virtual vector<WeatherVariable> getWeatherData() const = 0;
    virtual ~WeatherForecastingSystem() = default;
};

#endif /

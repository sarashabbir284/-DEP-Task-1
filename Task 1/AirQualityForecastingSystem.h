#pragma once
#ifndef AIRQUALITYFORECASTINGSYSTEM
#define AIRQUALITYFORECASTINGSYSTEM
using namespace std;

#include "WeatherForecastingSystem.h"

class AirQualityForecastingSystem : public WeatherForecastingSystem {
public:
    void fetchWeatherData(const Location& location) override;
    vector<WeatherVariable> getWeatherData() const override;
private:
    vector<WeatherVariable> airQualityData;
};

#endif 

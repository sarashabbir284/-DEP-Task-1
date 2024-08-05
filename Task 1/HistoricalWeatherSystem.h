#pragma once
#ifndef HISTORICALWEATHERSYSTEM
#define HISTORICALWEATHERSYSTEM
using namespace std;

#include "WeatherForecastingSystem.h"

class HistoricalWeatherSystem : public WeatherForecastingSystem {
public:
    void fetchWeatherData(const Location& location) override;
    vector<WeatherVariable> getWeatherData() const override;
private:
    vector<WeatherVariable> weatherData;
};

#endif 

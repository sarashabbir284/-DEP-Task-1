#include "AirQualityForecastingSystem.h"
#include <iostream>
using namespace std;

void AirQualityForecastingSystem::fetchWeatherData(const Location& location) {
    // Simulated data fetch
    airQualityData.push_back(WeatherVariable("PM2.5", 35.0, "ug/m3"));
    airQualityData.push_back(WeatherVariable("PM10", 50.0, "ug/m3"));
   cout << "Air quality data fetched for " << location.getCity() << "\n";
}

std::vector<WeatherVariable> AirQualityForecastingSystem::getWeatherData() const {
    return airQualityData;
}
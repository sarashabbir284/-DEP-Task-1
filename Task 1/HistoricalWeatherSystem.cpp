#include "HistoricalWeatherSystem.h"
#include <iostream>
using namespace std;

void HistoricalWeatherSystem::fetchWeatherData(const Location& location) {
    // Simulated data fetch
    weatherData.push_back(WeatherVariable("Temperature", 25.0, "C"));
    weatherData.push_back(WeatherVariable("Humidity", 60.0, "%"));
    cout << "Historical weather data fetched for " << location.getCity() << "\n";
}

std::vector<WeatherVariable> HistoricalWeatherSystem::getWeatherData() const {
    return weatherData;
}
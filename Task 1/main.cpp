#include <iostream>
using namespace std;
#include "Location.h"
#include "HistoricalWeatherSystem.h"
#include "AirQualityForecastingSystem.h"

void printWeatherData(const vector<WeatherVariable>& data) {
    for (const auto& var : data) {
        cout << var.getName() << ": " << var.getValue() << " " << var.getUnit() << "\n";
    }
}

int main() {
    Location loc("pakistan", "USA", 40.7128, -74.0060);

    HistoricalWeatherSystem historicalSystem;
    historicalSystem.fetchWeatherData(loc);
    auto historicalData = historicalSystem.getWeatherData();
    cout << "Historical Weather Data:\n";
    printWeatherData(historicalData);

    AirQualityForecastingSystem airQualitySystem;
    airQualitySystem.fetchWeatherData(loc);
    auto airQualityData = airQualitySystem.getWeatherData();
    cout << "Air Quality Data:\n";
    printWeatherData(airQualityData);

    return 0;
}
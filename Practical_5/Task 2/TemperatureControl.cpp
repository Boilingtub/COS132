#include"TemperatureControl.h"
using namespace std;

void adjustTemperature(float temperature, float humidity, float pressure){
    cout << "Stabilizing temperature.\n";
    if(temperature>40) {
        if(pressure>1100 && humidity > 60)
            handleHighTempHighPressureHighHumidity(temperature);
        else if(pressure > 1100)
            handleHighTempHighPressure(temperature,pressure);
        else if(pressure <= 1100 && humidity < 30)
            handleHighTempLowHumidity(temperature, humidity);
        else
            handleHighTemp(temperature);
    }
    else if(temperature<10){
        if(humidity > 70)
            handleColdHighHumidity(temperature,humidity);
        else
            handleCold(temperature);
    }
    else
        handleStableConditionsTemperature();
}
void handleHighTempHighPressureHighHumidity(float temperature){
    cout << "Critical: High temp, high pressure, high humidity. Emergency shutdown.\n";
    temperature-=20;
    cout << "Temperature set to: " << temperature << ".\n";
}
void handleHighTempHighPressure(float temperature, float pressure){
    cout << "High temp and pressure. Cooling and depressurizing.\n";
    temperature-=15;
    pressure-=30;
    cout << "Pressure set to: " << pressure << ".\n";
    cout << "Temperature set to: " << temperature << ".\n";
}
void handleHighTempLowHumidity(float temperature, float humidity){
    cout << "High temp, low humidity. Mild cooling and moisturizing.\n";
    temperature-=10;
    humidity+=15;
    cout << "Humidity set to: " << humidity << ".\n";
    cout << "Temperature set to: " << temperature << ".\n";
}
void handleHighTemp(float temperature){
    cout << "High temp only. Standard cooling.\n";
    temperature-=5;
    cout << "Temperature set to: " << temperature << ".\n";
}
void handleColdHighHumidity(float temperature, float humidity){
    cout << "Cold and humid. Heating and slight dehumidification.\n";
    temperature+=10;
    humidity-=10;
    cout << "Humidity set to: " << humidity << ".\n";
    cout << "Temperature set to: " << temperature << ".\n";
}
void handleCold(float temperature){
    cout << "Cold only. Heating.\n";
    temperature+=5;
    cout << "Temperature set to: " << temperature << ".\n";
}
void handleStableConditionsTemperature(){
    cout << "Temperature is stable. No action required.\n";
}

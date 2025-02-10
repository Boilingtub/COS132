#include"PressureControl.h"
using namespace std;
void adjustPressure(float pressure, float temperature, float humidity){
    cout << "Stabilizing pressure.\n";
    if(pressure > 1200){
        if(temperature > 38)
            handleHighPressureHighTemp(pressure,temperature);
        else
            handleHighPressurePressure(pressure);
    } 
    else if(pressure < 800) {
        if(humidity < 30)
            handleLowPressureDry(pressure,humidity);
        else
            handleLowPressurePressure(pressure);
    }
    else {
        if(temperature > 25)
            handleModeratePressureWarm(temperature);
        else if(humidity > 50) 
            handleModeratePressureHumid(humidity);
        else
            handleStableConditionsPressure();
    }
}

void handleHighPressureHighTemp(float pressure, float temperature){
    cout << "High pressure and high temperature. Depressurizing and cooling.\n";
    pressure-=40;
    temperature-=7;
    cout << "Pressure set to: " << pressure << ".\n";
    cout << "Temperature set to: " << temperature << ".\n";
}
void handleHighPressurePressure(float pressure){
    cout << "High pressure. Depressurizing.\n";
    pressure-=30;
    cout << "Pressure set to: " << pressure << ".\n";
}
void handleLowPressureDry(float pressure, float humidity){
    cout << "Low pressure and dry. Pressurizing and moisturizing.\n";
    pressure+=35;
    humidity+=15;
    cout << "Pressure set to: " << pressure << ".\n";
    cout << "Humidity set to: " << humidity << ".\n";
}
void handleLowPressurePressure(float pressure){
    cout << "Low pressure. Pressurizing.\n";
    pressure+=25;
    cout << "Pressure set to: " << pressure << ".\n";

}
void handleModeratePressureWarm(float temperature){
    cout << "Moderate pressure and warm. Minor cooling.\n";
    temperature-=2;
    cout << "Temperature set to: " << temperature << ".\n";
}
void handleModeratePressureHumid(float humidity){;
    cout << "Moderate pressure and humid. Minor dehumidification.\n";
    humidity-=5;
    cout << "Humidity set to: " << humidity << ".\n";
}
void handleStableConditionsPressure(){
    cout <<  "Pressure is stable. No action required.\n";
}

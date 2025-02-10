#include"HumidityControl.h"
using namespace std;
void adjustHumidity(float humidity, float temperature, float pressure){
    cout << "Stabilizing humidity.\n";
    if(humidity > 75) {
        if(temperature > 35) 
            handleHumidAndHot(humidity,temperature);
        else
            handleVeryHumid(humidity);
    }
    else if(humidity < 25) {
        if(pressure < 950)
            handleDryAndLowPressure(humidity,pressure);
        else
            handleDry(humidity);
    }
    else {
        if(temperature > 25)
            handleModerateHumidityWarm(temperature);
        else if(temperature < 15)
            handleModerateHumidityCold(temperature);
        else if(pressure > 1020)
            handleHighPressureHumidity(pressure);
        else if(pressure < 980)
            handleLowPressureHumidity(pressure);
        else
            handleStableConditionsHumidity();
    }
}
void handleHumidAndHot(float humidity, float temperature){
    cout << "Humid and hot. Dehumidifying and cooling.\n";
    humidity-=20;
    temperature-=5;
    cout << "Temperature set to: " << temperature << ".\n";
    cout << "Humidity set to: " << humidity << ".\n";
}
void handleVeryHumid(float humidity){
    cout << "Very humid. Dehumidifying.\n";
    humidity-=15;
    cout << "Humidity set to: " << humidity << ".\n";
}
void handleDryAndLowPressure(float humidity, float pressure){
    cout << "Dry and low pressure. Moisturizing and pressurizing.\n";
    humidity+=20;
    pressure+=25;
    cout << "Pressure set to: " << pressure << ".\n";
    cout << "Humidity set to: " << humidity << ".\n";
}
void handleDry(float humidity){
    cout << "Dry only. Moisturizing.\n";
    humidity+=10;
    cout << "Humidity set to: " << humidity << ".\n";
}
void handleModerateHumidityWarm(float temperature){
    cout << "Moderate humidity and warm. Slight cooling.\n";
    temperature-=3;
    cout << "Temperature set to: " << temperature << ".\n";
}
void handleModerateHumidityCold(float temperature){
    cout << "Moderate humidity and cold. Slight heating.\n";
    temperature+=3;
    cout << "Temperature set to: " << temperature << ".\n";
}
void handleHighPressureHumidity(float pressure){
    cout << "High pressure. Depressurizing.\n";
    pressure-=15;
    cout << "Pressure set to: " << pressure << ".\n";
}
void handleLowPressureHumidity(float pressure){
    cout << "Low pressure. Pressurizing.\n";
    pressure+=15;
    cout << "Pressure set to: " << pressure << ".\n";
}
void handleStableConditionsHumidity(){
    cout << "Humidity is stable. No action required.\n";
}

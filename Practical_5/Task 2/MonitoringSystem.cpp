#include"MonitoringSystem.h"
void monitorAndAdjust(float temperature, float pressure, float humidity){
    adjustHumidity(humidity, temperature, pressure);
    adjustPressure(pressure,temperature,humidity);
    adjustTemperature(temperature, humidity, pressure);
}

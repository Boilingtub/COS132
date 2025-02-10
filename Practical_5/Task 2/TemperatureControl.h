#ifndef TEMPERATURE_CONTROL_H
#define TEMPERATURE_CONTROL_H
#include <iostream>
void adjustTemperature(float temperature, float humidity, float pressure);
void handleHighTempHighPressureHighHumidity(float temperature);
void handleHighTempHighPressure(float temperature, float pressure);
void handleHighTempLowHumidity(float temperature, float humidity);
void handleHighTemp(float temperature);
void handleColdHighHumidity(float temperature, float humidity);
void handleCold(float temperature);
void handleStableConditionsTemperature();
#endif // TEMPERATURE_CONTROL_H


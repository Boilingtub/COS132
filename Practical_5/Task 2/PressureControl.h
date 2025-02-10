#ifndef PRESSURE_CONTROL_H
#define PRESSURE_CONTROL_H
#include <iostream>
void adjustPressure(float pressure, float temperature, float humidity);
void handleHighPressureHighTemp(float pressure, float temperature);
void handleHighPressurePressure(float pressure);
void handleLowPressureDry(float pressure, float humidity);
void handleLowPressurePressure(float pressure);
void handleModeratePressureWarm(float temperature);
void handleModeratePressureHumid(float humidity);
void handleStableConditionsPressure();
#endif // PRESSURE_CONTROL_H

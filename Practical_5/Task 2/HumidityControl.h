#ifndef HUMIDITY_CONTROL_H
#define HUMIDITY_CONTROL_H
#include <iostream>
void adjustHumidity(float humidity, float temperature, float pressure);
void handleHumidAndHot(float humidity, float temperature);
void handleVeryHumid(float humidity);
void handleDryAndLowPressure(float humidity, float pressure);
void handleDry(float humidity);
void handleModerateHumidityWarm(float temperature);
void handleModerateHumidityCold(float temperature);
void handleHighPressureHumidity(float pressure);
void handleLowPressureHumidity(float pressure);
void handleStableConditionsHumidity();
#endif // HUMIDITY_CONTROL_H


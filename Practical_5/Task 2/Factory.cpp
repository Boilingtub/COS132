#include "MonitoringSystem.h"
#include <iostream>

int main() {

    // Generate pseudo-random environmental conditions
    float temperature = 90;  // Random temperature between 0 and 99
    float pressure = 1200;  // Random pressure between 500 and 2000
    float humidity = 66;  // Random humidity between 0 and 99

    // Output initial conditions
    std::cout << "Initial Conditions:" << std::endl;
    std::cout << "Temperature: " << temperature << " degrees" << std::endl;
    std::cout << "Pressure: " << pressure << " hPa" << std::endl;
    std::cout << "Humidity: " << humidity << "%" << std::endl;

    // Monitor and adjust based on the initial random values
    monitorAndAdjust(temperature, pressure, humidity);

    return 0;
}

/** Expected output
 * 
Initial Conditions:
Temperature: 90 degrees
Pressure: 1200 hPa
Humidity: 66%
Stabilizing humidity.
Moderate humidity and warm. Slight cooling.
Temperature set to: 87.
Stabilizing pressure.
Moderate pressure and warm. Minor cooling.
Temperature set to: 88.
Stabilizing temperature.
Critical: High temp, high pressure, high humidity. Emergency shutdown.
Temperature set to: 70.
 *
*/

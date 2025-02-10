Factory: TemperatureControl.o HumidityControl.o PressureControl.o MonitoringSystem.o Factory.o
	g++ TemperatureControl.o HumidityControl.o PressureControl.o MonitoringSystem.o Factory.o -o Factory

TemperatureControl.o: TemperatureControl.cpp TemperatureControl.h
	g++ -c TemperatureControl.cpp -std=c++98

HumidityControl.o: HumidityControl.cpp HumidityControl.h
	g++ -c HumidityControl.cpp -std=c++98

PressureControl.o: PressureControl.cpp PressureControl.h
	g++ -c PressureControl.cpp -std=c++98

MonitoringSystem.o: MonitoringSystem.cpp MonitoringSystem.h TemperatureControl.h HumidityControl.h PressureControl.h
	g++ -c MonitoringSystem.cpp -std=c++98

Factory.o: Factory.cpp MonitoringSystem.h
	g++ -c Factory.cpp -std=c++98

run: Factory
	./Factory

clean:
	rm -f *.o Factory
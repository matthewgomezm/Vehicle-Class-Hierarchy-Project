hw5: main.o vehicle.o car.o truck.o motorcycle.o boat.o
	g++ -o hw5 -std=c++11 main.o vehicle.o car.o truck.o motorcycle.o boat.o 
main.o: main.cpp
	g++ -c -std=c++11 main.cpp
vehicle.o: vehicle.cpp vehicle.h
	g++ -c -std=c++11 vehicle.cpp 
	g++ -c -std=c++11 vehicle.h
car.o: car.cpp car.h
	g++ -c -std=c++11 car.cpp
	g++ -c -std=c++11 car.h
truck.o: truck.cpp truck.h
	g++ -c -std=c++11 truck.cpp
	g++ -c -std=c++11 truck.h
motorcycle.o: motorcycle.cpp motorcycle.h
	g++ -c -std=c++11 motorcycle.cpp
	g++ -c -std=c++11 motorcycle.h
boat.o: boat.cpp boat.h
	g++ -c -std=c++11 boat.cpp
	g++ -c -std=c++11 boat.h
clear:
	rm *.o
	rm *.h.gch
	rm hw5
// *************************
// * Author: Matthew Gomez *********
// * Florida State University 2025 *
// *********************************

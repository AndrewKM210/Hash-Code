all: main

main: main.o city.o ride.o vehicle.o
	g++ main.o city.o ride.o vehicle.o -o main
	
main.o: main.cpp
	g++ main.cpp -c

city.o: city.cpp city.hpp
	g++ city.cpp -c
	
ride.o: ride.cpp ride.hpp
	g++ ride.cpp -c
	
vehicle.o: vehicle.cpp vehicle.hpp
	g++ vehicle.cpp
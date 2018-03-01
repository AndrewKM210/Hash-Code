all: main

main: main.o city.o ride.o vehicle.o
	g++ -std=c++11 main.o city.o ride.o vehicle.o -o main
	
main.o: main.cpp
	g++ -std=c++11 main.cpp -c

city.o: city.cpp city.hpp
	g++ -std=c++11 city.cpp -c
	
ride.o: ride.cpp ride.hpp
	g++ -std=c++11 ride.cpp -c
	
vehicle.o: vehicle.cpp vehicle.hpp
	g++ -std=c++11 vehicle.cpp -c
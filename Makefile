all: main

main: main.o ciudad.o ride.o vehicle.o
	g++ main.o ciudad.o ride.o vehicle.o -o main
	
main.o: main.cpp
	g++ main.cpp -c

ciudad.o: ciudad.cpp ciudad.hpp
	g++ ciudad.cpp -c
	
ride.o: ride.cpp ride.h
	g++ ride.cpp -c
	
vehicle.o: vehicle.cpp vehicle.h
	g++ vehicle.cpp
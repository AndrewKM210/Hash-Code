#include "ciudad.hpp"



Ciudad::Ciudad(int r, int c,int nC){
	this->row = r;
	this->column = c;
	this->numCar = nC;

	vehicles = malloc(sizeof(Vehicle)*numCar);
	for(int i = 0; i < numCar; i++){
		vehicles[i] = new Vehicle();
		free.insert(vehicles[i]);
	}
}

Vehicle Ciudad::TakeCar(int i){
	return vehicles[i];
}

Vehicle UpdateCar(int i, Vehicle v){
	vehicles[i] = v;
}


#include "ciudad.hpp"

Ciudad::Ciudad(int r, int c,int nC){
	this->row = r;
	this->column = c;
	this->numCar = nC;
}

void Ciudad::CreateCars(numCar){
	Vehicle v;
	for(int i = 0; i < numCar; i++){
		this->vehicles[i] = v;
	}
}

Vehicle Ciudad::TakeCar(int i){
	return vehicles[i];
}

Vehicle UpdateCar(int i, Vehicle v){
	vehicles[i] = v;
}
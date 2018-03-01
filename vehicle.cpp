#include "vehicle.h"

Vehicle::Vehicle(int idV){
	this->id = idV;
	this->x = 0;
	this->y = 0;
	this->enRecorrido = false;
}

Vehicle::~Vehicle(){
	
}

void Vehicle::move(int posx, int posy){
	this->x = x;
	this->y = y;
}

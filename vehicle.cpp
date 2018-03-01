#include "vehicle.h"

vehicle::vehicle(int idV){
	this->id = idV;
	this->x = 0;
	this->y = 0;
	this->enRecorrido = false;
}

vehicle::~vehicle(){
	
}

void vehicle::move(int posx, int posy){
	this->x = x;
	this->y = y;
}

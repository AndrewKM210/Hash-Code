#include "vehicle.hpp"

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


int Vehicle::TimeToDest(int x,int y){
	int xe;
	int ye;

	if(x > v.posFinalX){
		xe = x - posFinalX;
	}
	else{
		xe = posFinalX - x;
	}

	if(y > v.posFinalY){
		ye = y - posFinalY;
	}
	else{
		ye = posFinalX - y;
	}
	return Tfinal + xe + ye;
}

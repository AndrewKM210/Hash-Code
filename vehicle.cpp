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


int Vehicle::TimeToDest(Vehicle v,int x,int y){
	int xe;
	int ye;

	if(x > v.posFinalX){
		xe = x - v.posFinalX;
	}
	else{
		xe = v.posFinalX - x;
	}

	if(y > v.posFinalY){
		ye = y - v.posFinalY;
	}
	else{
		ye = v.posFinalX - y;
	}
	return v.Tfinal + xe + ye;
}

#include "vehicle.hpp"

Vehicle::Vehicle(int idV){
	id = idV;
	posFinalX = 0;
	posFinalY = 0;
}

void Vehicle::move(int posx, int posy){
	posFinalX = x;
	posFinalY = y;
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

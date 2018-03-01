#include "vehicle.hpp"

Vehicle::Vehicle(int idV){
	id = idV;
	posFinalX = 0;
	posFinalY = 0;
}

void Vehicle::move(int x, int y){
	posFinalX = x;
	posFinalY = y;
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

void Vehicle::AssignRide(int id) {
	assignedRides.push(id);
}

string Vehicle::GetAssignedRides() {
	string result = "";
	while (!assignedRides.empty()) {
		result += to_string(assignedRides.front());
		assignedRides.pop();
		if (!assignedRides.empty()) result += " ";
	}
	return result;
}

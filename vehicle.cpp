#include "vehicle.hpp"

Vehicle::Vehicle() {
	id = -1;
	posFinalX = 0;
	posFinalY = 0;
	Tfinal = 0;
}

void Vehicle::SetId(int idV) {
	id = idV;
}

int Vehicle::TimeToDest(int x,int y){
	int xe;
	int ye;

	if(x > posFinalX){
		xe = x - posFinalX;
	}
	else{
		xe = posFinalX - x;
	}

	if(y > posFinalY){
		ye = y - posFinalY;
	}
	else{
		ye = posFinalY - y;
	}
	return Tfinal + xe + ye;
}

void Vehicle::AssignRide(int idR, int fx, int fy, int newT) {
	assignedRides.push(idR);
	posFinalX = fx;
	posFinalY = fy;
	Tfinal = newT;
}

string Vehicle::GetAssignedRides() {
	string result = to_string(assignedRides.size()) + " ";
	while (!assignedRides.empty()) {
		result += " " + to_string(assignedRides.front());
		assignedRides.pop();
	}
	result += "\n";
	return result;
}

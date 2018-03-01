#include "city.hpp"



City::City(int r, int c,int nC){

	this->row = r;
	this->column = c;
	this->numCar = nC;
	
	for (int i = 0; i < nC; i++) {
		vehicles[i].SetId(i);
	}
}

Vehicle& City::TakeCar(int i){
	return vehicles[i];
}

void City::FindBestVehicleForRide(int startX, int startY, int& bestAvailableTime, int& vehicleId) {
	vehicleId = -1;
	bestAvailableTime = 1000000001;
	for (int i = 0; i < numCar; i++) {
		int time = vehicles[i].TimeToDest(startX, startY);
		if (time < bestAvailableTime) {
			vehicleId = i;
			bestAvailableTime = time;
		}
	}
}

string City::GetOutput() {
	string result = "";
	for (int i = 0; i < numCar; i++) {
		result += vehicles[i].GetAssignedRides();
	}
	return result;
}

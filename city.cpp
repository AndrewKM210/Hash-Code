#include "city.hpp"



City::City(int r, int c,int nC){

	this->row = r;
	this->column = c;
	this->numCar = nC;

	vehicles = malloc(sizeof(Vehicle)*numCar);
	for(int i = 0; i < numCar; i++){
		vehicles[i] = new Vehicle(i);
		free.insert(vehicles[i].id);
	}
}

Vehicle& City::TakeCar(int i){
	return vehicles[i];
}

void City::UpdateCar(int i, Vehicle v){
	vehicles[i] = v;
}

void City::OccupiedCar(int id){
	free.erase(id);
}

void City::FindBestVehicleForRide(int startX, int startY, int& vehicleId, int& bestAvailableTime) {
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

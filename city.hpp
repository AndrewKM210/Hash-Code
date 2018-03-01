#include <cstdlib>
#include <iostream>
#include "vehicle.hpp"

using namespace std;

class City {

private:
	int row;
	int column;
	int numCar;
	Vehicle vehicles[10000];

public:
	City(int r,int c,int nC);
	Vehicle& TakeCar(int i);
	void FindBestVehicleForRide(int startX, int startY, int& bestAvailableTime, int& vehicleId);
	string GetOutput();
};




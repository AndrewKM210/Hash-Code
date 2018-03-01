#include "vehicle.hpp"

using namespace std;

class City {

private:
	int row;
	int column;
	int numCar;
	vehicle* vehicles;

public:
	City(int r,int c,int nC);
	Vehicle& TakeCar(int i);
	void UpdateCar(int i, vehicle v);

};




#include "vehicle.h"
#include <set>

using namespace std;

class City {

private:
	int row;
	int column;
	int numCar;
	set<Vehicle> free;
	Vehicle* vehicles;

public:
	City(int r,int c,int nC);
	Vehicle TakeCar(int i);
	void UpdateCar(int i, Vehicle v);

};




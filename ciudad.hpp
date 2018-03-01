#include "vehicle.h"
#include <set>

using namepace std;

class Ciudad {

private:
	int row;
	int column;
	int numCar;
	set<Vehicle> free;
	Vehicle* vehicles;

public:
	Ciudad(int r,int c,int nC);
	Vehicle TakeCar(int i);
	void UpdateCar(int i, Vehicle v);

};




#include "vehicle.h"

using namespace std;

class Ciudad {

private:
	int row;
	int column;
	int numCar;
	Vehicle* vehicles;

public:
	Ciudad(int r,int c,int nC);
	Vehicle TakeCar(int i);
	void UpdateCar(int i, Vehicle v);

};




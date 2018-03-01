#ifndef CIUDAD_HPP
#define CIUDAD_HPP

using namepace std;

class Ciudad {

private:
	int row;
	int column;
	int numCar;
	Vehicle vehicles[numCar];

public:
	Ciudad(int r,int c,int nC);
	Vehicle TakeCar(int i);
	void UpdateCar(int i, Vehicle v);

};




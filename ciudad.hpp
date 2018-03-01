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
	Ciudad(int row,int column);
	void CreateCars(Vehicle v);
	Vehicle TakeCar(int i);
	void UpdateCar(int i, Vehicle v);

};




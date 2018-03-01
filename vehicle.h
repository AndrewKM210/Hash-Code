#ifndef VEHICLE_H
#define VEHICLE_H

class Vehicle
{
public:
	Vehicle(int idV);
	~Vehicle();
	void move(int posx, int posy);
	
	int id;
	int x;
	int y;
	
	bool enRecorrido;
	
};

#endif // VEHICLE_H

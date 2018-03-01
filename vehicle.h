#ifndef VEHICLE_H
#define VEHICLE_H

class vehicle
{
public:
	vehicle(int idV);
	~vehicle();
	void move(int posx, int posy);
	
	int id;
	int x;
	int y;
	
	bool enRecorrido;
	
};

#endif // VEHICLE_H

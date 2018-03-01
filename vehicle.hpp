#ifndef VEHICLE_HPP
#define VEHICLE_HPP

class Vehicle
{
public:
	Vehicle(int idV);
	~Vehicle();
	void move(int posx, int posy);
	int TimeToDest(Vehicle v,int x,int y);
	
	int id;

	int posFinalX;
	int posFinalY;
	
	int Tfinal;

	bool enRecorrido;
	
};

#endif // VEHICLE_HPP

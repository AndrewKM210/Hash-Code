#ifndef VEHICLE_HPP
#define VEHICLE_HPP

#include <queue>
#include <string>

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
	
	queue<int> assignedRides();
	
	void AssignRide(int id);
	string GetAssignedRides();
	
};

#endif // VEHICLE_HPP

#ifndef VEHICLE_HPP
#define VEHICLE_HPP

#include <queue>
#include <iostream>
#include <string>

using namespace std;

class Vehicle
{
public:
	Vehicle();
	void SetId(int idV);
	int TimeToDest(int x,int y);
	
	int id;

	int posFinalX;
	int posFinalY;
	
	int Tfinal;
	
	queue<int> assignedRides;
	
	void AssignRide(int idR, int fx, int fy, int newT);
	string GetAssignedRides();
	
};

#endif // VEHICLE_HPP

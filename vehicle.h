#ifndef VEHICLE_H
#define VEHICLE_H

class vehicle
{
public:
	vehicle();
	~vehicle();
	void move(int posx, int posy);
	
private:
	int x;
	int y;
};

#endif // VEHICLE_H

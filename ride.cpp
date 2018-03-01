#include "ride.hpp"

Ride::Ride(int sx, int sy, int ex, int ey, int es, int lf) {
	startX = sx;
	startY = sy;
	endX = ex;
	endY = ey;
	earliestStart = es;
	lastestFinish = lf;
	
	int dx = sx > ex ? sx - ex : ex - sx;
	int dy = sy > ey ? sy - ey : ey - sy;
	rideLength = dx + dy;
}

int Ride::Length() {
	return rideLength;
}

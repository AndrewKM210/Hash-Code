#include "ride.hpp"

Ride::Ride() {
	// ola
}

void Ride::init(int idr, int sx, int sy, int ex, int ey, int es, int lf) {
	idRide = idr;
	startX = sx;
	startY = sy;
	endX = ex;
	endY = ey;
	earliestStart = es;
	lastestFinish = lf;
	
	int dx = sx > ex ? sx - ex : ex - sx;
	int dy = sy > ey ? sy - ey : ey - sy;
	length = dx + dy;
	lastestStart = lf - length; // TODO igual es -1
}

int Ride::GetLastestStartTime() {
	return lastestStart;
}

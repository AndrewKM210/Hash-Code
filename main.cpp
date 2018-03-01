#include <iostream>
#include <fstream>
#include <set>
#include <list>
#include "city.hpp"
#include "vehicle.hpp"
#include "ride.hpp"

using namespace std;

int main(int argc, char **argv) {
	
	if (argc != 3) {
		cout << "./" << argv[0] << " <fich_entrada> <fich_salida>" << endl;
		return 1;
	}
	
	ifstream ent(argv[1]);
	if (!ent.is_open()) {
		cout << "No se encuentra el fichero de entrada" << endl;
	} else {
		// Leer primera columna (datos ciudad, vehiculos, rides, bonus, steps)
		int rows, columns, numVehicles, numRides, bonus, steps;
		ent >> rows >> columns;
		ent >> numVehicles >> numRides;
		ent >> bonus >> steps;
		
		City city(rows, columns, numVehicles);
		Ride rides[10000];
		bool rideBuena[10000];
		
		for (int i = 0; i < 10000; i++) rideBuena[i] = false;
		
		// Leer datos de rides
		for (int i = 0; i < numRides; i++) {
			int sx, sy, ex, ey, es, lf;
			ent >> sx >> sy >> ex >> ey >> es >> lf;
			
			rides[i].init(i, sx, sy, ex, ey, es, lf);
			rideBuena[i] = true;
		}
			
		// Asignar rides a todos los vehiculos disponibles (si hay rides que quedan)
		for (int i = 0; i < numRides; i++) {
			int bestRideId = -1;
			int bestRideVehicle = -1;
			int bestRideScore = 1000000001;
			for (int j = 0; j < 10000; j++) {
				if (rideBuena[j]) {
					int bestAvailableTime, bestVehicleId;
					city.FindBestVehicleForRide(rides[j].startX, rides[j].startY, bestAvailableTime, bestVehicleId);
					if (bestAvailableTime < bestRideScore) {
						bestRideScore = bestAvailableTime;
						bestRideId = rides[j].idRide;
						bestRideVehicle = bestVehicleId;
					}
				}
			}
			rideBuena[bestRideId] = false;
			if (bestRideScore <= rides[bestRideId].GetLastestStartTime() && bestRideScore + rides[bestRideId].length <= steps) {
				city.TakeCar(bestRideVehicle).AssignRide(rides[bestRideId].idRide, rides[bestRideId].endX, rides[bestRideId].endY, bestRideScore + rides[bestRideId].length);
			}
		}
		
		// Escribir por salida
		ofstream sal(argv[2]);
		sal << city.GetOutput();
	}
	
}

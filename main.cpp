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
		list<Ride> rides;
		
		// Leer datos de rides
		for (int i = 0; i < numRides; i++) {
			int sx, sy, ex, ey, es, lf;
			ent >> sx >> sy >> ex >> ey >> es >> lf;
			
			int posIns = 0;
			for (list<Ride>::iterator it = rides.begin(); it != rides.end(); it++) {
				if (*it.es < es) {
					posIns++;
				} else {
					break;
				}
			}
			Ride newRide(sx, sy, ex, ey, es, lf);
			rides.insert(posIns, newRide);
		}
			
		// Asignar rides a todos los vehiculos disponibles (si hay rides que quedan)
		int idRide = 0;
		for (list<Ride>::iterator it = rides.begin(); it != rides.end(); it++) {
			int targetX, targetY;
			int bestAvailableTime, bestVehicleId;
			city.FindBestVehicleForRide(*it.sx, *it.sy, bestAvailableTime, bestVehicleId);
			if (bestAvailableTime <= *it.GetLastestStartTime()) {
				city.TakeCar(bestVehicleId).AssignRide(idRide);
			}
			idRide++;
		}
		
		// Escribir por salida
		ofstream sal(argv[2]);
		sal << city.GetOutput();
	}
	
}

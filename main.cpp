#include <iostream>
#include <fstream>
#include <set>
#include "city.hpp"
#include "vehicle.hpp"
#include "ride.hpp"

using namespace std;

int main(int argc, char **argv) {
	
	if (argc != 2) {
		cout << "./" << argv[0] << " <fich_entrada>" << endl;s
		return 1;
	}
	
	ifstream ent(argv[1]);
	if (!ent.is_open()) {
		cout << "No se encuentra el fichero de entrada" << endl;
	} else {
		
		int steps;
		
		// Leer primera columna (datos ciudad, vehiculos, rides, bonus, steps)
		int rows, columns, numVehicles, numRides, bonus;
		ent >> rows >> columns;
		ent >> numVehicles >> numRides;
		ent >> bonus >> steps;
		
		Ciudad ciudad(rows, columns, numVehicles);
		
		// Leer datos de rides
		for (int i = 0; i < rides) {
			int sx, sy, ex, ey, es, lf;
			ent >> sx >> sy >> ex >> ey >> es >> lf;
			
			// recorrer toda la lista para ver donde meterlo
			// meterlo en esa posicion
		}
			
		// Asignar rides a todos los vehiculos disponibles (si hay rides que quedan)
		// por cada recorrido que queda
			int targetX, targetY;
			int bestAvailableTime, bestVehicleId;
			ciudad.FindBestVehicleForRide(/*startx, starty*/, bestAvailableTime, bestVehicleId);
			if (bestAvailableTime > /*ride.GetLastestStartTime()*/) {
				/* descartar */
			} else {
				/* asignar ride i al vehiculo bestVehicleId */
			}
		
	}
	
}

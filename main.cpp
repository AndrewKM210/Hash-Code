#include <iostream>
#include <fstream>
#include <set>
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
		
		// Leer datos de rides
		for (int i = 0; i < numRides; i++) {
			int sx, sy, ex, ey, es, lf;
			ent >> sx >> sy >> ex >> ey >> es >> lf;
			
			// recorrer toda la lista para ver donde meterlo
			// meterlo en esa posicion
		}
			
		// Asignar rides a todos los vehiculos disponibles (si hay rides que quedan)
		// por cada recorrido que queda
			int targetX, targetY;
			int bestAvailableTime, bestVehicleId;
			city.FindBestVehicleForRide(/*startx, starty*/, bestAvailableTime, bestVehicleId);
			if (bestAvailableTime > /*ride*/.GetLastestStartTime()) {
				/* descartar recorrido */
			} else {
				city.TakeCar(bestVehicleId).AssignRide(/*id_ride*/);
			}
		
		// Escribir por salida
		ofstream sal(argv[2]);
		sal << city.GetOutput();
	}
	
}

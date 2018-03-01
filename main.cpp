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
			//rides[i] = new Ride(sx, sy, ex, ey, es, lf);
		}
			
		// Asignar rides a todos los vehiculos disponibles (si hay rides que quedan)
		if (ridesLeft > 0) {
			// por cada recorrido que queda
				int targetX, targetY; // TODO asignar al punto inicial de salida
				// if vehiclesLeft > 0
					int bestScore = -1;
					int bestVehicleId = -1;
					// por cada vehiculo de la ciudad
						// calcular puntuacion
						if (/* score */ > bestScore) {
							bestScore = ... ;
							bestVehicleId = ... ;
						}
					// asignar el recorrido a bestVehicleId y quitarlo de la lista
					ridesLeft--;
		}
		
		int ridesLeft = numRides;
		for (int i = 0; i < steps; i++) {
			
			
			// Mover a los vehiculos y cambiar su estado
			// recorrer todos los vehiculos
				// si tiene un recorrido asignado entonces que haga acciones necesarias
		}
		
	}
	
}

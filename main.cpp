#include <iostream>
#include <fstream>
#include "ciudad.h"
#include "vehicle.h"
#include "ride.h"

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
		
		Ciudad ciudad;
		Ride* rides;
		int steps;
		
		// Leer primera columna (datos ciudad, vehiculos, rides, bonus, steps)
		int rows, columns, numVehicles, numRides, bonus;
		ent >> rows >> columns;
		ent >> numVehicles >> numRides;
		ent >> bonus >> steps;
		
		// TODO inicializar ciudad y sus vehiculos
		
		rides = malloc(sizeof(Ride) * numrides);
		
		// Leer datos de rides
		for (int i = 0; i < rides) {
			int sx, sy, ex, ey, es, lf;
			ent >> sx >> sy >> ex >> ey >> es >> lf;
			rides[i] = new Ride(sx, sy, ex, ey, es, lf);
		}
		
		int ridesLeft = numRides;
		for (int i = 0; i < steps; i++) {
			// Asignar rides a todos los vehiculos disponibles (si hay rides que quedan)
			if (ridesLeft > 0) {
				// if vehiclesLeft > 0
				
			}
			// Mover a los vehiculos y cambiar su estado
		}
		
	}
	
}

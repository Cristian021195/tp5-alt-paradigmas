/*
 * Usuario.cpp
 *
 *  Created on: 6 oct 2023
 *      Author: crist
 */

#include "Usuario.h"

Usuario::Usuario(string correo, string tarjeta):
	correo(correo), tarjeta(tarjeta){}
void Usuario::cargarAlquiler(Alquiler *alquiler){
	alquileres.push_back(alquiler);
}

float Usuario::calcularMonto(Fecha fecha){
	float monto_fijo = 100;
	//cout << (int)alquileres.size() << endl;

	for(int i = 0; i < (int)alquileres.size(); i++){

		for(int c = 0; c < (int)alquileres[i]->getCapacidad(); c++){

			if(alquileres[i]->getFecha()->getAnio() == fecha.getAnio()){
				if(alquileres[i]->getFecha()->getMes() == fecha.getMes()){
					monto_fijo += alquileres[i]->getPeliculas()[c]->montoPelicula();
				}
			}

		}

	}

	return monto_fijo;
}

Usuario::Usuario() {}

Usuario::~Usuario() {
	for(int i = 0; i < (int)alquileres.size(); i++){
		delete(alquileres[i]);
	}
}

Usuario::Usuario(const Usuario &other) {}


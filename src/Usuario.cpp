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
	for(int i = 0; i < alquileres.size(); i++){
		for(int c = 0; c < alquileres[i]->peliculas.size(); c++){
			monto_fijo += alquileres[i]->peliculas[c]->montoPelicula();
		}
	}

	return monto_fijo;
}

Usuario::Usuario() {}

Usuario::~Usuario() {
	for(int i = 0; i < alquileres.size(); i++){
		delete(alquileres[i]);
	}
}

Usuario::Usuario(const Usuario &other) {}


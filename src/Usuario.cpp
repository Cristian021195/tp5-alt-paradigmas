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
return 0;
}

Usuario::Usuario() {}

Usuario::~Usuario() {}

Usuario::Usuario(const Usuario &other) {}


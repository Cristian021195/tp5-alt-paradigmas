/*
 * Usuario.h
 *
 *  Created on: 6 oct 2023
 *      Author: crist
 */

#ifndef USUARIO_H_
#define USUARIO_H_
#include <string>
#include <iostream>
#include <vector>
#include"Alquiler.h"
#include"Fecha.h"

using namespace std;


class Usuario {
	string correo;
	string tarjeta;
	vector<Alquiler*> alquileres;
public:
	Usuario();
	Usuario(string correo, string tarjeta);
	void cargarAlquiler(Alquiler *alquiler);
	float calcularMonto(Fecha fecha);
	virtual ~Usuario();
	Usuario(const Usuario &other);
};

#endif /* USUARIO_H_ */

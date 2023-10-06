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

using namespace std;


class Usuario {
	string correo;
	string tarjeta;
	vector<Alquiler> alquileres;
public:
	Usuario();
	virtual ~Usuario();
	Usuario(const Usuario &other);
};

#endif /* USUARIO_H_ */

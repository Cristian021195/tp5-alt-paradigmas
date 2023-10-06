/*
 * Fecha.h
 *
 *  Created on: 6 oct 2023
 *      Author: crist
 */

#ifndef FECHA_H_
#define FECHA_H_

#include <iostream>
#include <string>

using namespace std;


class Fecha {
	unsigned int dia;
	unsigned int mes;
	unsigned int anio;
public:
	Fecha();
	virtual ~Fecha();
	float getDia();
	float getMes();
	float getAnio();
	string getFecha();
	Fecha(const Fecha &other);
};

#endif /* FECHA_H_ */

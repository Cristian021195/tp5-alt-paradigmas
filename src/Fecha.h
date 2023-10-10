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
	static const int anio_actual = 2023;
	Fecha();
	Fecha(unsigned int dia, unsigned int mes, unsigned int anio);
	virtual ~Fecha();
	int getDia();
	int getMes();
	int getAnio();
	void getFechaStr();
	Fecha(const Fecha &other);
};

#endif /* FECHA_H_ */

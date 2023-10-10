/*
 * PruebaFecha.h
 *
 *  Created on: 9 oct 2023
 *      Author: crist
 */

#ifndef PRUEBAFECHA_H_
#define PRUEBAFECHA_H_
#include <iostream>
#include "Fecha.h"

using namespace std;

class PruebaFecha {
	Fecha *fecha;
public:
	PruebaFecha();
	PruebaFecha(Fecha *fecha);
	Fecha* getFecha();
	virtual ~PruebaFecha();
	PruebaFecha(const PruebaFecha &other);
};

#endif /* PRUEBAFECHA_H_ */

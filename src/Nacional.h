/*
 * Nacional.h
 *
 *  Created on: 6 oct 2023
 *      Author: crist
 */

#ifndef NACIONAL_H_
#define NACIONAL_H_
#include <iostream>
#include <string>
#include "Pelicula.h"
using namespace std;


class Nacional: public Pelicula {
public:
	Nacional();
	Nacional(string nombre, Fecha *fecha_estreno, float precio_base);
	float montoPelicula();
	void absFn();
	virtual ~Nacional();
	Nacional(const Nacional &other);
};

#endif /* NACIONAL_H_ */

/*
 * Internacional.h
 *
 *  Created on: 6 oct 2023
 *      Author: crist
 */

#ifndef INTERNACIONAL_H_
#define INTERNACIONAL_H_

#include <iostream>
#include <string>
#include "Pelicula.h"
using namespace std;


class Internacional: public Pelicula {
	string origen;
public:
	Internacional();
	Internacional(string origen, string nombre, Fecha *fecha_estreno, float precio_base);
	float montoPelicula();
	void absFn();
	virtual ~Internacional();
	Internacional(const Internacional &other);
};

#endif /* INTERNACIONAL_H_ */

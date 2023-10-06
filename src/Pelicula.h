/*
 * Pelicula.h
 *
 *  Created on: 6 oct 2023
 *      Author: crist
 */

#ifndef PELICULA_H_
#define PELICULA_H_

#include<iostream>
#include<string>
#include "Fecha.h"

using namespace std;


class Pelicula {
protected:
	float precio_base;
	string nombre;
	Fecha fecha_estreno;
public:
	Pelicula();
	Pelicula(string nombre, Fecha fecha_estreno, float precio_base);
	string getNombre();
	float getPrecioBase();
	Fecha getFecha();
	virtual float montoPelicula();
	virtual void absFn()=0;
	virtual ~Pelicula();
	Pelicula(const Pelicula &other);

};

#endif /* PELICULA_H_ */

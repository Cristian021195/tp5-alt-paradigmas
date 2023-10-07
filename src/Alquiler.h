/*
 * Alquiler.h
 *
 *  Created on: 6 oct 2023
 *      Author: crist
 */

#ifndef ALQUILER_H_
#define ALQUILER_H_
#include<iostream>
#include<string>
#include<vector>
#include<array>
#include "Fecha.h"
#include "Pelicula.h"
using namespace std;

enum tipoPelicula{N,I};

class Alquiler {
	Fecha fecha;
	unsigned int capacidad;
	array<Pelicula*, 5> peliculas;
public:
	//array<Pelicula*, 5> peliculas;
	Alquiler();
	Alquiler(Fecha fecha);
	//string origen, string nombre, Fecha fecha_estreno, float precio_base):
	//origen(origen), Pelicula(nombre, fecha_estreno, precio_base)
	void cargarPelicula(tipoPelicula t, string origen, string nombre, Fecha fecha_estreno, float precio_base);
	void listarPeliculas();
	virtual ~Alquiler();
	Alquiler(const Alquiler &other);
};

#endif /* ALQUILER_H_ */

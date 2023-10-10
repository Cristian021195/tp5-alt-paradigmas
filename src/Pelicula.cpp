/*
 * Pelicula.cpp
 *
 *  Created on: 6 oct 2023
 *      Author: crist
 */

#include "Pelicula.h"

Pelicula::Pelicula() {}
Pelicula::Pelicula(string nombre, Fecha &fecha_estreno, float precio_base):
	nombre(nombre), fecha_estreno(fecha_estreno), precio_base(precio_base) {}

string Pelicula::getNombre(){
	return nombre;
}
float Pelicula::getPrecioBase(){
	return precio_base;
}
Fecha Pelicula::getFecha(){
	return fecha_estreno;
}

float Pelicula::montoPelicula(){
	return 0;
}
void absFn(){}

Pelicula::~Pelicula() {
}

Pelicula::Pelicula(const Pelicula &other) {
	// TODO Auto-generated constructor stub

}


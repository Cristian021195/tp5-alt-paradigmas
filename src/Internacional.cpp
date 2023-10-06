/*
 * Internacional.cpp
 *
 *  Created on: 6 oct 2023
 *      Author: crist
 */

#include "Internacional.h"
#include "Pelicula.h"
#include <string>
#include <iostream>

using namespace std;

Internacional::Internacional() {}
Internacional::Internacional(string origen, string nombre, Fecha fecha_estreno, float precio_base):
		origen(origen), Pelicula(nombre, fecha_estreno, precio_base){}

float Internacional::montoPelicula(){
	return precio_base*1.3;
}
void Internacional::absFn(){}

Internacional::~Internacional() {
	// TODO Auto-generated destructor stub
}

Internacional::Internacional(const Internacional &other) {
	// TODO Auto-generated constructor stub

}


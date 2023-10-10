/*
 * Nacional.cpp
 *
 *  Created on: 6 oct 2023
 *      Author: crist
 */

#include<iostream>
#include<string>
#include "Nacional.h"
#include "Pelicula.h"

using namespace std;

Nacional::Nacional(){}
Nacional::Nacional(string nombre, Fecha *fecha_estreno, float precio_base):Pelicula(nombre, *fecha_estreno, precio_base){}
float Nacional::montoPelicula(){
	int diff = fecha_estreno.anio_actual - fecha_estreno.getAnio();
	if(diff > 10){
		return precio_base * 0.8;
	}
	return precio_base;
}
void Nacional::absFn(){}

Nacional::~Nacional() {
	// TODO Auto-generated destructor stub
}

Nacional::Nacional(const Nacional &other) {
	// TODO Auto-generated constructor stub

}


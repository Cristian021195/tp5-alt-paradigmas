/*
 * Alquiler.cpp
 *
 *  Created on: 6 oct 2023
 *      Author: crist
 */

#include "Alquiler.h"
#include "Pelicula.h"
#include "Fecha.h"
#include <array>
#include <iostream>
#include <string>

using namespace std;

Alquiler::Alquiler(Fecha fecha):fecha(fecha), capacidad(0){}


void Alquiler::cargarPelicula(Pelicula *pelicula){
	if(peliculas.empty()){
		peliculas[0] = pelicula;
		capacidad++;
	}else{
		if(capacidad < 5){
			peliculas[capacidad] = pelicula;
			capacidad++;
		}else{
			cout << "Completado cupo peliculas x alquiler" << endl;
		}

	}
}

Alquiler::Alquiler() {}

Alquiler::~Alquiler() {}

Alquiler::Alquiler(const Alquiler &other) {}


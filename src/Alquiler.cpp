/*
 * Alquiler.cpp
 *
 *  Created on: 6 oct 2023
 *      Author: crist
 */

#include "Alquiler.h"
#include "Pelicula.h"
#include "Nacional.h"
#include "Internacional.h"
#include "Fecha.h"
#include <array>
#include <iostream>
#include <string>

using namespace std;

Alquiler::Alquiler(Fecha *fecha, int capacidad):fecha(fecha), capacidad(0){
}


void Alquiler::cargarPelicula(tipoPelicula t, string origen, string nombre, Fecha *fecha_estreno, float precio_base){
	if(capacidad < 5){
		if(t == N){
			Nacional *pelicula = new Nacional(nombre, fecha_estreno, precio_base);
			peliculas[capacidad] = pelicula;
		}else if(t == I){
			Internacional *pelicula = new Internacional(origen, nombre, fecha_estreno, precio_base);
			peliculas[capacidad] = pelicula;
		}
		capacidad++;
	}else{
		cout << "Completado cupo peliculas x alquiler (" << capacidad << ")" << endl;
	}

	/*if(peliculas.empty()){
		if(t == N){
			Nacional *pelicula = new Nacional(nombre, fecha_estreno, precio_base);
			peliculas[0] = pelicula;
		}else if(t == I){
			Internacional *pelicula = new Internacional(origen, nombre, fecha_estreno, precio_base);
			peliculas[0] = pelicula;
		}
		capacidad++;
	}else{
		if(capacidad < 2){
			if(t == N){
				Nacional *pelicula = new Nacional(nombre, fecha_estreno, precio_base);
				peliculas[capacidad] = pelicula;
			}else if(t == I){
				Internacional *pelicula = new Internacional(origen, nombre, fecha_estreno, precio_base);
				peliculas[capacidad] = pelicula;
			}
			capacidad++;
		}else{
			cout << "Completado cupo peliculas x alquiler (" << capacidad << ")" << endl;
		}

	}*/
}
Fecha* Alquiler::getFecha(){
	return fecha;
}

unsigned int Alquiler::getCapacidad(){
	return capacidad;
}
array<Pelicula*, 5> Alquiler::getPeliculas(){
	return peliculas;
}
void Alquiler::listarPeliculas(){
	for(int i = 0; i < (int)peliculas.size(); i++){
		cout << " Titulo: " << peliculas[i]->getNombre()
		<< " Monto: " << peliculas[i]->montoPelicula() << endl;
	}
}
Alquiler::Alquiler() {}

Alquiler::~Alquiler() {
	for(int i = 0; i < (int)peliculas.size(); i++){
		//cout << "nombre peli: " << peliculas[i]->getNombre() << endl;
		delete(peliculas[i]);
		//cout << "nombre peli: " << peliculas[i]->getNombre() << endl;
	}
}

Alquiler::Alquiler(const Alquiler &other) {}


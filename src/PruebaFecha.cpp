/*
 * PruebaFecha.cpp
 *
 *  Created on: 9 oct 2023
 *      Author: crist
 */

#include "PruebaFecha.h"

#include <iostream>
#include "Fecha.h"
using namespace std;

Fecha* PruebaFecha::getFecha(){
	return fecha;
}

PruebaFecha::PruebaFecha(Fecha *fecha): fecha(fecha){
	cout << "pf creado " << this << " fpf creado " << fecha << endl;
	//fecha->getFechaStr();
}
PruebaFecha::PruebaFecha() {
}

PruebaFecha::~PruebaFecha() {
	cout << "pf eliminado" << endl;
}

PruebaFecha::PruebaFecha(const PruebaFecha &other) {
}


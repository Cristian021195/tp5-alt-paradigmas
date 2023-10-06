/*
 * Fecha.cpp
 *
 *  Created on: 6 oct 2023
 *      Author: crist
 */

#include "Fecha.h"

Fecha::Fecha() {}
Fecha::Fecha(unsigned int dia, unsigned int mes, unsigned int anio):
		dia(dia), mes(mes), anio(anio) {}
int Fecha::getDia(){
	return dia;
}
int Fecha::getMes(){
	return mes;
}
int Fecha::getAnio(){
	return anio;
}
string Fecha::getFecha(){
	return "";
}

Fecha::~Fecha() {
	// TODO Auto-generated destructor stub
}

Fecha::Fecha(const Fecha &other) {
	// TODO Auto-generated constructor stub

}


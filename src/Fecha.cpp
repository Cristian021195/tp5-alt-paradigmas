/*
 * Fecha.cpp
 *
 *  Created on: 6 oct 2023
 *      Author: crist
 */

#include "Fecha.h"
#include <iostream>

using namespace std;


Fecha::Fecha() {}
Fecha::Fecha(unsigned int dia, unsigned int mes, unsigned int anio):
		dia(dia), mes(mes), anio(anio) {
	//cout << "f creada " << this << endl;
}
int Fecha::getDia(){
	return dia;
}
int Fecha::getMes(){
	return mes;
}
int Fecha::getAnio(){
	return anio;
}
void Fecha::getFechaStr(){
	cout << dia << "/" << mes << "/" << anio << endl;
}

Fecha::~Fecha() {
	//cout << "f eliminada" << endl;
}

Fecha::Fecha(const Fecha &other) {
	// TODO Auto-generated constructor stub

}


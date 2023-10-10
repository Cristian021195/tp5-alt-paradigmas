//============================================================================
// Name        : tp5-alt.cpp
// Author      : Cristian Gramajo
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include "Fecha.h"
#include "Nacional.h"
#include "Internacional.h"
#include "Alquiler.h"
#include "Usuario.h"
#include "PruebaFecha.h"
using namespace std;


int main() {
	/*Fecha f1  = Fecha(10,10,2022);
	Nacional n1("Peli #1",f1 , 100);
	cout << "fec" << n1.getFecha().getAnio() << endl;*/
	/*Nacional n1("Peli #1", Fecha(10,10,2022), 100);
	Internacional I1("Alemana","Peli #2", Fecha(10,10,2022), 100);
	Nacional n2("Peli #3", Fecha(10,10,2022), 100);
	Internacional I2("Alemana","Peli #4", Fecha(10,10,2022), 100);
	Nacional n3("Peli #5", Fecha(10,10,2022), 100);

	*/
	Fecha f_alq = Fecha(10,10,2022);
	Fecha f_alq2 = Fecha(10,10,2023);
	//Alquiler alquiler(&f_alq, 10);
	Alquiler *alquiler = new Alquiler(&f_alq, 10);
	Alquiler *alquiler2 = new Alquiler(&f_alq2, 10);

	alquiler->cargarPelicula(N,"","100 anios", &f_alq, 100);
	alquiler->cargarPelicula(I,"eeuu","jack reacher", &f_alq, 100);
	alquiler2->cargarPelicula(I,"panama","vacaiones", &f_alq2, 1000);

	Usuario usr("cristiangramajo015@gmail.com", "055451354");
	usr.cargarAlquiler(alquiler);
	usr.cargarAlquiler(alquiler2);
	cout << "Monto Usuario: " << usr.calcularMonto(Fecha(10,10,2023)) << endl;

	//alquiler.listarPeliculas();

	/*Fecha faux = Fecha(10,10,20);
	PruebaFecha pf = PruebaFecha(&faux);

	pf.getFecha()->getFechaStr();*/




	return 0;
}

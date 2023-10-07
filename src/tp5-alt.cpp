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
using namespace std;


int main() {
	/*Nacional n1("Peli #1", Fecha(10,10,2022), 100);
	Internacional I1("Alemana","Peli #2", Fecha(10,10,2022), 100);
	Nacional n2("Peli #3", Fecha(10,10,2022), 100);
	Internacional I2("Alemana","Peli #4", Fecha(10,10,2022), 100);
	Nacional n3("Peli #5", Fecha(10,10,2022), 100);*/



	Alquiler alquiler(Fecha(10,10,2023));

	alquiler.cargarPelicula(N,"","100 anios", Fecha(10,10,2022), 100);
	alquiler.cargarPelicula(I,"eeuu","jack reacher", Fecha(10,10,2022), 100);

	Usuario usr("cristiangramajo015@gmail.com", "055451354");
	usr.cargarAlquiler(&alquiler);
	usr.calcularMonto(Fecha(10,10,2022));

	//alquiler.listarPeliculas();




	return 0;
}

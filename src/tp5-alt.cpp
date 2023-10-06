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
using namespace std;


int main() {
	Nacional n1("Peli #1", Fecha(10,10,2022), 100);
	Internacional I1("Alemana","Peli #2", Fecha(10,10,2022), 100);
	Nacional n2("Peli #3", Fecha(10,10,2022), 100);
	Internacional I2("Alemana","Peli #4", Fecha(10,10,2022), 100);
	Nacional n3("Peli #5", Fecha(10,10,2022), 100);

	Alquiler A1(Fecha(10,10,2023));

	return 0;
}

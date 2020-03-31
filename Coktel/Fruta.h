/*
* Fruta.h
*
* Created on: Mar 23, 2020
* Author: curso
*/
#include<string>
#include <iostream>
using namespace std;

#ifndef FRUTA_H_
#define FRUTA_H_

class Fruta {
private:
	string nombre;

public:
	Fruta();
	Fruta(string nombre);
	Fruta(string nombre, int i);
	virtual ~Fruta();
	void setNombre(string nombre);
	string getNombre();
};

#endif /* FRUTA_H_ */
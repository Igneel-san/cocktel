/*
* Fruta.cpp
*
* Created on: Mar 23, 2020
* Author: curso
*/
#include "Fruta.h"

Fruta::Fruta() {
	cout << "constructor de fruta vacio" << endl;
}

Fruta::Fruta(string nombre) {
	cout << "constructor de fruta con parametros" << endl;
	this->nombre = nombre;

}

Fruta::Fruta(string nombre, int i) {
	cout << "constructor de fruta con parametros i= " << i + 1 << endl;
	this->nombre = nombre;

}

Fruta::~Fruta() {
}

string Fruta::getNombre() {
	return this->nombre;
}

void Fruta::setNombre(string _nombre) {
	this->nombre = _nombre;
cout<<<"hola fruta nueva"<<endl;
}
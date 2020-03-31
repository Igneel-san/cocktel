#pragma once
/*
* Manzana.h
*
* Created on: Mar 23, 2020
* Author: curso
*/
#include "Fruta.h"
#ifndef MANZANA_H_
#define MANZANA_H_

class Manzana : public Fruta {
public:
	Manzana();
	Manzana(string nombre);
	virtual ~Manzana();
};

#endif /* MANZANA_H_ */

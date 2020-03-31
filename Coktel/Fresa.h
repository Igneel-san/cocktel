#pragma once
#include "Fruta.h"
#ifndef FRESA_H_
#define FRESA_H_

class Fresa: public Fruta {
public:
	Fresa();
	Fresa(string nombre);
	virtual ~Fresa();
};

#endif /* Fresa_H_ */
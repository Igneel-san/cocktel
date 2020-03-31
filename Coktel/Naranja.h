#pragma once
#include "Fruta.h"
#ifndef NARANJA_H_
#define NARANJA_H_

class Naranja : public Fruta {
public:
	Naranja();
	Naranja (string nombre);
	virtual ~Naranja();
};

#endif /* Naranja_H_ */
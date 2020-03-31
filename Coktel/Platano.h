#pragma once
#include "Fruta.h"
#ifndef PLATANO_H_
#define PLATANO_H_

class Platano : public Fruta {
public:
	Platano();
	Platano(string nombre);
	virtual ~Platano();
};

#endif /* PLATANO_H_ */


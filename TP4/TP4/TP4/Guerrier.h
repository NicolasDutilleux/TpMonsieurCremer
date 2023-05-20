#pragma once
#include "Personnage.h"
class Guerrier:public Personnage
{
protected: int defense;

public: 
	Guerrier();
	Guerrier(std::string nom1);
	virtual void recevoir_degats(int degat);


};


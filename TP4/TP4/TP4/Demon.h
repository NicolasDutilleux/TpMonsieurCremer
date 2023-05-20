#pragma once
#include "Personnage.h"
class Demon:public Personnage
{
protected: int sang;

public:
	Demon();
	Demon(std::string nom1);
	void Avaleur_d_ame(Personnage* cible);
};


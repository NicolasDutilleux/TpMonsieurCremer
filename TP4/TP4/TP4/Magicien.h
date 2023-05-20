#pragma once
#include "Personnage.h"
class Magicien:public Personnage
{
protected: int mana;

public:
	Magicien();
	Magicien(std::string nom1);
	void Feu(Personnage*cible);

};


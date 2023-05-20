#pragma once
#include "Personnage.h"
class Faucheur:public Personnage
{
protected : 
	int collecteur;

public : 
	Faucheur();
	Faucheur(std::string nom1);
	void mangeur_dunivers(Personnage* cible);
	virtual void frapper(Personnage* cible);


};


#pragma once
#include <iostream>
class Personnage
{
protected: 
	int vie;
	std::string nom;
	int degat;
	int bouclier_etat;
	bool vivant;

public:
	Personnage();
	Personnage(std::string nom1);
	virtual void recevoir_degats(int degat);
	virtual void frapper(Personnage* cible);
	virtual void bouclier();
	virtual void afficher();
	virtual bool en_vie();
};


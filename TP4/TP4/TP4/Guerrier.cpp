#include "Guerrier.h"

Guerrier::Guerrier() :Personnage()
{
	vie = 200;
	degat = 25;
	defense = 20;

}
Guerrier::Guerrier(std::string nom1):Personnage(nom1)
{
	vie = 200;
	degat = 25;
	defense = 20;

}
void Guerrier::recevoir_degats(int degat) 
{
	if (bouclier_etat == 1)
	{
		vie -= (degat / 2)-defense;
		bouclier_etat = 0;
	}
	else
	{
		vie -= degat- defense;
	}

}

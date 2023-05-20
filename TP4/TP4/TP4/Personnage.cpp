#include "Personnage.h"

Personnage::Personnage() 
{
	vie = 100;
	degat = 20;
	bouclier_etat = 0;
	vivant = true;
}
Personnage::Personnage(std::string nom1)
{
	vie = 100;
	degat = 20;
	nom = nom1;
	bouclier_etat = 0;

}
void Personnage::recevoir_degats(int degat) 
{
	if (bouclier_etat == 1)
	{
		vie -= degat / 2;
		bouclier_etat = 0;
	}
	else
	{
		vie -= degat;
	}
	
}
void Personnage::frapper(Personnage* cible) 
{
	cible->recevoir_degats(degat);
}
void Personnage::bouclier() 
{
	bouclier_etat = 1;
}
void Personnage::afficher()
{
	std::cout << "Vie = " << vie << std::endl;
	std::cout << "Bouclier = " << bouclier_etat << std::endl;
	std::cout << "degat = " << degat << std::endl;
}
bool Personnage::en_vie()
{
	if (vie <= 0)
	{
		vivant = false;
	}
	return vivant;

}
#include "Faucheur.h"



Faucheur::Faucheur():Personnage()
{
	collecteur = 0;

}
Faucheur::Faucheur(std::string nom1) :Personnage(nom1)
{

	collecteur = 0;

}
void Faucheur::mangeur_dunivers(Personnage* cible)
{
	if (collecteur == 10)
	{
		std::cout << "L'univers tremble en voyant la puissance sortie par cette attaque" << std::endl << "Prépareton cerceuil" << std::endl;
		cible->recevoir_degats(degat*10);

	}

}
void Faucheur::frapper(Personnage* cible)
{
	cible->recevoir_degats(degat);
	collecteur++;
}
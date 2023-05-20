#include "Magicien.h"
Magicien::Magicien():Personnage()
{
	vie = 80;
	degat = 10;
	mana = 100;
}
Magicien::Magicien(std::string nom1) :Personnage(nom1)
{
	vie = 80;
	degat = 10;
	mana = 100;
}
void Magicien::Feu(Personnage* cible)
{
	cible->recevoir_degats(50);
}
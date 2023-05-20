#include "Demon.h"
Demon::Demon():Personnage()
{
	degat = 30;
	sang = 0;
}
Demon::Demon(std::string nom1):Personnage(nom1)
{
	sang = 0;
	nom = nom1;
}
void Demon::Avaleur_d_ame(Personnage*cible) 
{
	if (sang == 100)
	{
		cible->recevoir_degats(100);
		sang = 0;
	}
	else
	{
		cible->recevoir_degats(degat);
		sang += 50;
	}
}
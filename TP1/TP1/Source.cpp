#include <iostream>
#include "voiture.h"
int main()
	{
	voiture camion;
	char valeur;
	while (true)
	{
		std::cout << "monter une vitesse (u), monter de X vitesse (r), retrograder (d), quelle vitesse?(v) " << std::endl;
		std::cin >> valeur;
		std::cout << std::endl;
		
		if (valeur == 'u')
		{
			camion.accelere1();
		}
		else if (valeur == 'r')
		{
			int g;
			std::cout << "entrer le nombre de vitesse à passer" << std::endl;
			std::cin >> g;
			camion.accelerex(g);
		}
		else if (valeur == 'd')
		{
			camion.decelere1();
		}
		else if (valeur == 'v')
		{
			camion.rapport();
		}

	}
		



	}

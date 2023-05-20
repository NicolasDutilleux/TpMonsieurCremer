#include"Personnage.h"
#include"Faucheur.h"
#include"Demon.h"
#include"Magicien.h"
#include"Guerrier.h"
#include <vector>
void attaque(Personnage* joueur1, Personnage* joueur2)
{
	Guerrier* TestG;
	Demon* TestD;
	Magicien* TestM;
	Faucheur* TestF;
	if (TestG = dynamic_cast<Guerrier*>(joueur1))
	{
		std::cout << "Vous etes guerrier " << std::endl;
	}
	else if(TestM = dynamic_cast<Magicien*>(joueur1))
	{
		std::cout << "Vous etes Magicien" << std::endl;
	}
	else if(TestD = dynamic_cast<Demon*>(joueur1))
	{
		std::cout << "Vous etes Demon " << std::endl;
	}
	else if(TestF = dynamic_cast<Faucheur*>(joueur1))
	{
		std::cout << "Vous etes faucheur " << std::endl;
	}
	

}
	
/*Personnage ordre()
{
	return ;
}*/
int main()
{
	/*Magicien* mag = new Magicien();
	Demon* dem = new Demon;
	Personnage *pers = new Personnage();
	Faucheur *fau = new Faucheur();
	Guerrier *guer= new Guerrier();
	mag->frapper(dem);
	dem->afficher();
	dem->bouclier();
	dem->afficher();
	mag->frapper(dem);
	dem->afficher();*/
	char a;
	std::vector<Personnage*> tab;
	int c=0;
	int j=0;
	

	while (true)
	{
		std::cout << "Voulez vous creer un nouveau personnage? Oui (o) Non (n)" << std::endl;
		std::cin >> a;
		if (a == 'o')
		{
			j++;
		}
		while (c<j)
		{
		std::cout << "Joueur, Choississez votre personnage : Magicien (m) Demon (d) Faucheur (f) Guerrier (g) " << std::endl;
		std::cin >> a;
		std::cout << "" << std::endl;
			if (a == 'm')
			{
				tab.push_back(new Magicien());
				c++;
				break;
			}
			else if (a == 'd')
			{
				tab.push_back(new Demon());
				c++;

				break;
			}
			else if (a == 'f')
			{
				tab.push_back(new Faucheur());
				c++;
				break;
			}
			else if (a == 'g')
			{
				tab.push_back(new Guerrier());
				c++;
				break;
			}
			else
			{
				std::cout << "vous n'avez pas taper une bonne lettre" << std::endl;
			}

		}
		for (int i = 0;i < tab.size(); i++)
		{
			int pt = 0;
			std::cout << "Qui voulez vous attaquer? " << std::endl;
			for (int j = 0;j < tab.size(); j++)
			{
				if (j != i)
				{
					std::cout <<j<< "er joueur, Tapez "<<j << std::endl;
				}
			}
			std::cin >> pt;
			attaque(tab[i], tab[pt]);
		}
	}
	for (int i; i < tab.size();i++)
	{
		delete tab[i];
	}

}
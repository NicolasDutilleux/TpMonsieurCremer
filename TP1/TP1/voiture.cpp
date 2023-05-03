#include "voiture.h"
#include <iostream>
voiture::voiture()
{
	vitesse = 0;
}

void voiture::decelere1()
{
	vitesse = vitesse - 1;
	if (vitesse < 0)
	{
		vitesse = 0;
	}

}
void voiture::accelere1()
{
	vitesse = vitesse + 1;

	if (vitesse > 6)
	{
		vitesse = 6;
	}
}
void voiture::accelerex(int v)
{
	vitesse = vitesse + v;
	if (vitesse > 6)
	{
		vitesse = 6;
	}

}
void voiture::rapport()
{
	std::cout << "rapport: vitesse= " << vitesse << std::endl;

}
#include "Lampe.h"
#include<iostream>

void Lampe::boutonpress()
{
	if (onoff == 1) {
		onoff = 0;
	}
	else onoff = 1;
}
Lampe::Lampe()
{
	onoff = 0;
}
void Lampe::affiche()
{
	std::cout << "Lampe sur " << onoff << std::endl;
}
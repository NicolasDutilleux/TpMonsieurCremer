#include <iostream>
#include"bouton.h"
#include"Lampe.h"

int main()
{
	char press;
	Lampe lampe1;
	Lampe lampe2;
	Bouton bouton1(&lampe1);
	Bouton bouton11(&lampe1);
	Bouton bouton2(&lampe2);
	while (true)
	{
		std::cout << "Boutton 1 (a), Boutton 2(b), boutton 3 (c), quitter (d) " << std::endl;
		std::cin >> press;
	
		if (press == 'a')
	{
		bouton1.changeonoffappel();
	}
	else if (press == 'b')
	{
		bouton11.changeonoffappel();
	}
	else if (press == 'c')
	{
		bouton2.changeonoffappel();
	}
	
	}
	


}
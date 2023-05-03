#include "Bouton.h"
#include <iostream>

void Bouton::changeonoffappel() 
{
	pointeursurlampe->boutonpress();
	pointeursurlampe->affiche();
}
Bouton::Bouton(Lampe* pointeurlampe)
{
	pointeursurlampe = pointeurlampe;
}

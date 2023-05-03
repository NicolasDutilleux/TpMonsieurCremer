#pragma once
#include "Lampe.h"
class Bouton
{
private: Lampe* pointeursurlampe;
public:

	void changeonoffappel();
	Bouton(Lampe* pointeurlampe);


};

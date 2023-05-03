#include "Object_complexe.h"


int main()
{
	float a, b;
	std::cout << " nombre Reel : ";
	std::cin >> a;
	std::cout << ""<<std::endl;
		std::cout << " nombre imagineaire : ";
		std::cin >> b;

		Object_complexe O1;
		O1.forme_carthesienne(a, b);


	std::cout << "" << std::endl;
	std::cout << " module : ";
	std::cin >> a;
	std::cout << "" << std::endl;
	std::cout << " argument : ";
	std::cin >> b;

	Object_complexe O2;
	O2.forme_polaire(a, b);

	Object_complexe O3, O4,O5,O6;
	std::cout <<std::endl<< "O1 + O2 = "; O3 = O2 + &O1;
	std::cout << std::endl << "O1 - O2 = "; O4 = O2 - &O1;
	std::cout << std::endl << "O1 / O2 = "; O5 = O2 / &O1;
	std::cout << std::endl << "O1 * O2 = "; O6 = O2 * &O1;
	




}
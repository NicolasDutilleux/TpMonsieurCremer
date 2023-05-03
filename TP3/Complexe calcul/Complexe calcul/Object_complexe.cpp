#include "Object_complexe.h"
void Object_complexe::forme_carthesienne(float a, float b)
{
	reel = a;
	complexe = b;
	module = sqrt( a * a + b * b);
	argument = (atan(b / a)) * (180 / 3.14);
	std::cout << "        " << reel << " + " << complexe << "i" << "       " << module << "/" << argument << std::endl;

}
void Object_complexe::forme_polaire(float a, float b)
{
	module = a;
	argument = b;
	reel = module * cos(argument * 3.14 / 180);
	complexe = module * sin(argument * 3.14 / 180);
	std::cout << "        " << reel << " + " << complexe << "i" << "       " << module << "/" << argument <<std::endl;
}

void Object_complexe::afficher()
{
	std::cout << "        " << reel << " + " << complexe << "i" << "       " << module << "/" << argument << std::endl;

}
Object_complexe Object_complexe::operator+(const Object_complexe* deuxieme)
{
	
	float comple = complexe;
	float re = reel;
	comple += deuxieme->complexe;
	re += deuxieme->reel;
	Object_complexe Object_resultat;
	Object_resultat.forme_carthesienne(re,comple);
	return Object_resultat;

}
Object_complexe Object_complexe::operator-(const Object_complexe* deuxieme)
{

	float comple = complexe;
	float re = reel;
	comple -= deuxieme->complexe;
	re -= deuxieme->reel;
	Object_complexe Object_resultat;
	Object_resultat.forme_carthesienne(re, comple);
	return Object_resultat;

}
Object_complexe Object_complexe::operator/(const Object_complexe* deuxieme)
{

	float argu = argument;
	float mod = module;
	argu -= deuxieme->argument;
	mod /= deuxieme->module;
	Object_complexe Object_resultat;
	Object_resultat.forme_polaire(mod, argu);
	return Object_resultat;

}
Object_complexe Object_complexe::operator*(const Object_complexe* deuxieme)
{

	float argu = argument;
	float mod = module;
	argu += deuxieme->argument;
	mod *= deuxieme->module;
	Object_complexe Object_resultat;
	Object_resultat.forme_polaire(mod, argu);
	return Object_resultat;

}

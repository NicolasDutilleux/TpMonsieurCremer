#pragma once
#include <iostream>
#include <math.h>;
class Object_complexe
{
private: float reel;
	   float complexe;
	   float module;
	   float argument;
public: 
	void forme_carthesienne(float a, float b);
	void forme_polaire(float a, float b);
	void afficher();
	Object_complexe operator+(const Object_complexe* deuxieme);
	Object_complexe operator-(const Object_complexe* deuxieme);
	Object_complexe operator/(const Object_complexe* deuxieme);
	Object_complexe operator*(const Object_complexe* deuxieme);
};


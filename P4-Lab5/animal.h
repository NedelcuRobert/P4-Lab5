#include <iostream>
#include <string>
#include "functii.h"

using namespace std;

class CAnimal
{
protected:
	string nume;
	int data[3];
	float greutate;
	string hrana;
	float cantitate_hrana;
public:
	virtual void citire_animal(int timp) = 0;
	virtual void afisare_animal() = 0;
};


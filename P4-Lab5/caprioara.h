#include "urs.h"

class CCaprioara:public CAnimalIerbivor
{
private:
	int nr_pui;
public:
	void citire_animal(int timp);
	void afisare_animal();
};


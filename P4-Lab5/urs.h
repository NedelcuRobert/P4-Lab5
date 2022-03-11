#include "leu.h"

class CUrs:public CAnimalCarnivor,public CAnimalIerbivor
{
private:
	int per_hibernare;
public:
	void citire_animal(int timp);
	void afisare_animal();
};


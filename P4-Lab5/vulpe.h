#include "iepure.h"

class CVulpe:public CAnimalIerbivor,public CAnimalCarnivor
{
private:
	float temp_max;
	string tip;
public:
	void citire_animal(int timp);
	void afisare_animal();
};


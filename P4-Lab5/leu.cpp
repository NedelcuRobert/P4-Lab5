#include "leu.h"

void CLeu::citire_animal(int timp) {
	timp = rand() % 100;
	CAnimalCarnivor::citire_animal(timp);
	temp_min = random_nr_float(timp);
	tara_prov = random_string(timp);
}

void CLeu::afisare_animal() {
	CAnimalCarnivor::afisare_animal();
	cout << "Temperatura minima:" << " " << temp_min << endl;
	cout << "Tara de provenienta:" << " " << tara_prov << endl;
}

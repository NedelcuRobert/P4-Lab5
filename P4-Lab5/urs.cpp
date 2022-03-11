#include "urs.h"

void CUrs::citire_animal(int timp) {
	timp = rand() % 100;
	CAnimalCarnivor::citire_animal(timp);
	CAnimalIerbivor::citire_animal(timp + 50);
	per_hibernare = random_nr_int(timp);
}
void CUrs::afisare_animal() {
	CAnimalIerbivor::afisare_animal();
	CAnimalCarnivor::afisare_animal();
	cout << "Perioada hibernare:" << " " << per_hibernare << endl;
}

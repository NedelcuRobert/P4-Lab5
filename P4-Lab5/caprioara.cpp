#include "caprioara.h"

void CCaprioara::citire_animal(int timp) {
	timp = rand() % 100;
	CAnimalIerbivor::citire_animal(timp);
	nr_pui = random_nr_int(timp);
}

void CCaprioara::afisare_animal() {
	CAnimalIerbivor::afisare_animal();
	cout << "Numar pui:" << " " << nr_pui << endl;
}
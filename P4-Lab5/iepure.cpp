#include "iepure.h"

void CIepure::citire_animal(int timp) {
	timp = rand() % 100;
	CAnimalIerbivor::citire_animal(timp);
	suprafata_min = random_nr_int(timp);
}
void CIepure::afisare_animal() {
	CAnimalIerbivor::afisare_animal();
	cout << "Suprafata minima:" << " " << suprafata_min << endl;
}

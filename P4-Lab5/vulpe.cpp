#include "vulpe.h"

void CVulpe::citire_animal(int timp) {
	timp = rand() % 100;
	CAnimalIerbivor::citire_animal(timp);
	CAnimalCarnivor::citire_animal(timp+3);
	temp_max = random_nr_float(timp);
	tip = random_tip_vulpe(timp);
}

void CVulpe::afisare_animal() {
	CAnimalIerbivor::afisare_animal();
	CAnimalCarnivor::afisare_animal();
	cout << "Temperatura maxima:" << " " << temp_max << endl;
	cout << "Tip:" << " " << tip << endl;
}
#include "animalIerbivor.h"

void CAnimalIerbivor::citire_animal(int timp) {
	nume = random_string(timp);
	data[0] = random_zi(timp);
	data[1] = random_luna(timp);
	data[2] = random_an(timp);
	greutate = random_greutate(timp);
	hrana = random_string(timp);
	cantitate_hrana = random_nr_float(timp+1);
}

void CAnimalIerbivor::afisare_animal() {
	cout << "Nume:" << " " << nume << endl;
	cout << "Data:" << " " << data[0] << " " << data[1] << " " << data[2] << endl;
	cout << "Greutate:" << " " << greutate << endl;
	cout << "Hrana:" << " " << hrana << endl;
	cout << "Cantitate hrana:" << " " << cantitate_hrana << endl;
	cout << "Ierbivor" << endl;
}

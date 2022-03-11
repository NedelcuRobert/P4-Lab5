#include "rezervatie.h"

void CRezervatie::initializare_animale() {
	for (int i = 0;i < dim_iepuri;i++) {
		iepuri[i].citire_animal(i);
	}
	for (int i = 0;i < dim_vulpi;i++) {
		vulpi[i].citire_animal(i + 2);
	}
	for (int i = 0;i < dim_lei;i++) {
		lei[i].citire_animal(i + 3);
	}
	for (int i = 0;i < dim_ursi;i++) {
		ursi[i].citire_animal(i+4);
	}
	for (int i = 0;i < dim_caprioare;i++) {
		caprioare[i].citire_animal(i+5);
	}
}

void CRezervatie::afisare_animale() {
	cout << "\nIepuri:\n" << endl;
	for (int i = 0;i < dim_iepuri;i++) {
		cout << "\nIepure " << i+1 << endl;
		iepuri[i].afisare_animal();
	}
	cout << "\nVulpi:\n" << endl;
	for (int i = 0;i < dim_vulpi;i++) {
		cout << "\nVulpea " << i+1 << endl;
		vulpi[i].afisare_animal();
	}
	cout << "\nLei:\n" << endl;
	for (int i = 0;i < dim_lei;i++) {
		cout << "\nLeul " << i+1 << endl;
		lei[i].afisare_animal();
	}
	cout << "\nUrsi:\n" << endl;
	for (int i = 0;i < dim_lei;i++) {
		cout << "\nUrsul " << i+1 << endl;
		ursi[i].afisare_animal();
	}
	cout << "\nCaprioare:\n" << endl;
	for (int i = 0;i < dim_caprioare;i++) {
		cout << "\nCaprioara " << i+1 << endl;
		caprioare[i].afisare_animal();
	}
}

#include "caprioara.h"

#define dim_iepuri 3
#define dim_vulpi 5
#define dim_lei 8
#define dim_ursi 12
#define dim_caprioare 4

class CRezervatie
{
protected:
	CIepure iepuri[dim_iepuri];
	CVulpe vulpi[dim_vulpi];
	CLeu lei[dim_lei];
	CUrs ursi[dim_ursi];
	CCaprioara caprioare[dim_caprioare];
public:
	void initializare_animale();
	void afisare_animale();
};


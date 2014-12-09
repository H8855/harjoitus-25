#include <iostream>
#include <fstream>
using namespace std;

struct HKL
{
	char etunimi[20];
	float matka;
	int hattu;
};
int Valikko();
void TulostaHenkilo(HKL henkilo);
void TulostaKaikkiHenkilot(HKL henkilo[], int lkm);
void LisaaHenkilo(HKL henkilo[], int *lkm);
void PoistaHenkilo(HKL henkilo[], int *lkm);


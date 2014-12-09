#include "maarittely.h"
void main()
{
	int valinta = 1, hloa = 0, lkm = 0, i = 0;
	const int MAX = 10;

	HKL *henkilo = NULL;
	cout << "Montako henkiloa tietokantaan tulee?" << endl;
	cin >> hloa;
	if (hloa < MAX)
		henkilo = new HKL[hloa];
	else
	{
		cout << "Liian monta henkiloa, rajataan " << MAX << ":een." << endl;
		hloa = MAX;
		henkilo = new HKL[hloa];
	}
	
	lkm = 0;
	while (valinta != 0)
	{
		valinta = Valikko();
		switch (valinta)
		{
		case 0: valinta = 0; break;
		case 1: if (lkm < hloa)
			LisaaHenkilo(henkilo, &lkm);
				else
					cout << "Tietokanta taynna, ei voi lisata. " << endl;
				break;
		case 2: TulostaHenkilo(henkilo[lkm - 1]); break;
		case 3: TulostaKaikkiHenkilot(henkilo, lkm); break;
		case 4: PoistaHenkilo(henkilo, &lkm); break;
		}
	}
	delete henkilo;
}

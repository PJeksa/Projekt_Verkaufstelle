#include "Verkauf.h"



Artikel Verkauf::getArtikelToSell()
{
	return aToSell;
}

void Verkauf::setArtikelToSell(Artikel toSell)
{
	aToSell = toSell;
}

void Verkauf::verkaufArtikel(LagerArtikel toSell,int menge)
{
	if (lager.isAvailable(toSell))
	{
		if (toSell.getBestand() <= menge)
		{

		}
		else //zu verkaufende Menge Größer als auf Lager vorhanden -> Rest bestellen.
		{

		}
	}
	else
	{
		cout << "Verkauf nicht m\x94glich, Artikel in dieser Menge nicht an Lager vorhanden." << endl;
	}
}
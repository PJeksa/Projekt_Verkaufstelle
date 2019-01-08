#include "Verkauf.h"



Artikel Verkauf::getArtikelToSell()
{
	return aToSell;
}

void Verkauf::setArtikelToSell(Artikel toSell)
{
	aToSell = toSell;
}

void Verkauf::verkaufArtikel(Artikel toSell,int menge)
{
	if (lager.isAvailable(toSell))
	{
		
	}
	else
	{
		cout << "Verkauf nicht m\x94glich, Artikel in dieser Menge nicht an Lager vorhanden." << endl;
	}
}
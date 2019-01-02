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
	if (lager.isAvailable(toSell, menge))
	{
		if (kunde.getGeld() >= (toSell.getPreis() * menge))
		{
			lager.
		}
		else
		{
			cout << "Kunde besitzt nicht genug Geld." << endl;
		}
	}
	else
	{
		cout << "Verkauf nicht m\x94glich, Artikel in dieser Menge nicht an Lager vorhanden." << endl;
	}
}
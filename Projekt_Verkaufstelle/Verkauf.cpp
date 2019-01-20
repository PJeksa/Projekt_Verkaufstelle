#include "Verkauf.h"

Verkauf::Verkauf(Lager lager)
{
	this->lager = lager;
}

void Verkauf::verkaufArtikel(Artikel toSell,int menge)
{
	if (lager.isAvailable(&toSell))
	{
		
	}
	else
	{
		cout << "Verkauf nicht m\x94glich, Artikel in dieser Menge nicht an Lager vorhanden." << endl;
	}
}
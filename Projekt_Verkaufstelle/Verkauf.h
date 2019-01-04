#ifndef _VERKAUF_H_
#define _VERKAUF_H_

#include "Lager.h"
#include "Kunde.h"
#include "LagerArtikel.h"


class Verkauf
{
private:
	Artikel aToSell;
	Lager lager;
	Kunde kunde;

public:
	Verkauf() = default;
	~Verkauf() = default;

	Artikel getArtikelToSell();
	void setArtikelToSell(Artikel toSell);


	void verkaufArtikel(LagerArtikel toSell, int menge);
};


#endif

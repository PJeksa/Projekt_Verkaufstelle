#ifndef _VERKAUF_H_
#define _VERKAUF_H_

#include "Artikel.h"
#include "Lager.h"
#include "Kunde.h"


class Verkauf
{
private:
	Artikel aToSell;
	Lager lager;
	Kunde kunde;

public:
	Verkauf();
	~Verkauf();

	Artikel getArtikelToSell();
	void setArtikelToSell(Artikel toSell);


	void verkaufArtikel(Artikel toSell, int menge);
};


#endif

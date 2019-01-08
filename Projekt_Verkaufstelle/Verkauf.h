#ifndef _VERKAUF_H_
#define _VERKAUF_H_

#include "Storage.h"
#include "Artikel.h"


class Verkauf
{
private:
	Artikel aToSell;
	Storage lager;

public:
	Verkauf() = default;
	~Verkauf() = default;

	Artikel getArtikelToSell();
	void setArtikelToSell(Artikel toSell);


	void verkaufArtikel(Artikel toSell, int menge);
};


#endif

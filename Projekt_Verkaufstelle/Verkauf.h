#ifndef _VERKAUF_H_
#define _VERKAUF_H_

#include "Lager.h"
#include "Kunde.h"
#include "LagerArtikel.h"


class Verkauf
{
private:
	Lager lager;

public:
	Verkauf() = delete;
	Verkauf(Lager lager);
	~Verkauf() = default;


	void verkaufArtikel(Artikel toSell, int menge);
};


#endif

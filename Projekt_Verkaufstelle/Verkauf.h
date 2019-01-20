#ifndef _VERKAUF_H_
#define _VERKAUF_H_

#include "Storage.h"
#include "Kunde.h"
#include "LagerArtikel.h"


class Verkauf
{
private:
	Storage lager;

public:
	Verkauf() = delete;
	Verkauf(Storage lager);
	~Verkauf() = default;


	void verkaufArtikel(Artikel toSell, int menge);
};


#endif

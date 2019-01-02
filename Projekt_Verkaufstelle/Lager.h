#ifndef _LAGER_H_
#define _LAGER_H_

#include <list>
#include <iostream>
#include "Artikel.h"
using namespace std;


class Lager
{
private:
	list<Artikel> lagerList;

public:
	Lager();
	Lager(const Lager &toCopy);
	~Lager();

	bool addArtikel(Artikel toAdd);
	bool removeArtikelFromLager(Artikel toRemove);
	bool isAvailable(Artikel toCheck, int menge);
	bool takeFromLager(Artikel toTake, int menge);




};

#endif

#ifndef _LAGER_H_
#define _LAGER_H_

#include <list>
#include <iostream>
#include "LagerArtikel.h"
using namespace std;


class Lager
{
private:
	list<Artikel> lagerList;

public:
	Lager() = default;
	Lager(const Lager &toCopy);
	~Lager() = default;

	bool addItem(const Artikel &toAdd); //hinzuf�gen zu Lagerliste
	bool removeItemFromStorage(const Artikel &toRemove); //L�schen aus lagerListe
	bool isAvailable(const Artikel &toCheck);  //�bepr�fen ob in Liste vorhanden unabh�ngig von Menge
	void printOutLager();





};

#endif

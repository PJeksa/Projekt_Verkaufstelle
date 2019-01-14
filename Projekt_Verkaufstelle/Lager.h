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

	bool addItem(const Artikel &toAdd); //hinzufügen zu Lagerliste
	bool removeItemFromStorage(const Artikel &toRemove); //Löschen aus lagerListe
	bool isAvailable(const Artikel &toCheck);  //übeprüfen ob in Liste vorhanden unabhängig von Menge
	void printOutLager();





};

#endif

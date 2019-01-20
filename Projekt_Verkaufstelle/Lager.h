#ifndef _LAGER_H_
#define _LAGER_H_

#include <list>
#include <iostream>
#include "LagerArtikel.h"
using namespace std;


class Lager
{
private:
	list<LagerArtikel*> lagerList;

public:
	Lager() = default;
	Lager(const Lager &toCopy);
	~Lager() = default;

	bool addItem(LagerArtikel* toAdd); //hinzufügen zu Lagerliste
	bool addItem(Artikel* toAdd);
	bool removeItemFromStorage(LagerArtikel* toRemove); //Löschen aus lagerListe
	bool isAvailable(Artikel* toCheck);  //übeprüfen ob in Liste vorhanden unabhängig von Menge


	void printOutLager();





};

#endif

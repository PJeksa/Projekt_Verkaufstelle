#ifndef _Storage_H_
#define _Storage_H_

#include <list>
#include <iostream>
#include "LagerArtikel.h"
using namespace std;


class Storage
{
private:
	list<LagerArtikel*> lagerList;

public:
	Storage() = default;
	Storage(const Storage &toCopy);
	~Storage() = default;

	bool addItem(LagerArtikel * toAdd); //hinzufügen zu Storageliste
	bool addItem(Artikel * toAdd);
	bool removeItemFromStorage(LagerArtikel* toRemove); //Löschen aus StorageListe
	bool isAvailable(Artikel* toCheck);  //übeprüfen ob in Liste vorhanden unabhängig von Menge


	void printOutStorage();





};

#endif

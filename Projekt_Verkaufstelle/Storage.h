#ifndef _Storage_H_
#define _Storage_H_

#include <list>
#include <iostream>
#include "LagerArtikel.h"
using namespace std;


class Storage
{
private:
	list<LagerArtikel> lagerList;

public:
	Storage() = default;
	Storage(const Storage &toCopy);
	~Storage() = default;

	bool addItem(const LagerArtikel& toAdd); //hinzufügen zu Storageliste
	bool addItem(LagerArtikel* toAdd);
	bool addItem(const Artikel& toAdd);
	bool removeItemFromStorage(const LagerArtikel& toRemove); //Löschen aus StorageListe
	bool isAvailable(const Artikel& toCheck);  //übeprüfen ob in Liste vorhanden unabhängig von Menge


	void printOutStorage();





};

#endif

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

	bool addItem(const LagerArtikel& toAdd); //hinzuf�gen zu Storageliste
	bool addItem(LagerArtikel* toAdd);
	bool addItem(const Artikel& toAdd);
	bool removeItemFromStorage(const LagerArtikel& toRemove); //L�schen aus StorageListe
	bool isAvailable(const Artikel& toCheck);  //�bepr�fen ob in Liste vorhanden unabh�ngig von Menge


	void printOutStorage();





};

#endif

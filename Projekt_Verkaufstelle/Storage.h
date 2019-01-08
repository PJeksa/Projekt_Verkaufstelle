#ifndef _LAGER_H_
#define _LAGER_H_

#include <list>
#include <iostream>
#include "Artikel.h"
using namespace std;


class Storage
{
private:
	list<Artikel> lagerList;


	int getNubmerOfItems();

public:
	Storage() = default;
	Storage(const Storage &toCopy);
	~Storage() = default;

	void addItem(const Artikel &toAdd); //hinzuf�gen zu Lagerliste
	void removeItem(const Artikel &toRemove); //L�schen aus lagerListe
	bool isAvailable(const Artikel &toCheck);  //�bepr�fen ob in Liste vorhanden unabh�ngig von Menge
	void printOutStorage();
	




};

#endif

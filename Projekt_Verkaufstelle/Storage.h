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

	void addItem(const Artikel &toAdd); //hinzufügen zu Lagerliste
	void removeItem(const Artikel &toRemove); //Löschen aus lagerListe
	bool isAvailable(const Artikel &toCheck);  //übeprüfen ob in Liste vorhanden unabhängig von Menge
	void printOutStorage();
	




};

#endif

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

	bool addItem(LagerArtikel* toAdd); //hinzuf�gen zu Lagerliste
	bool addItem(Artikel* toAdd);
	bool removeItemFromStorage(LagerArtikel* toRemove); //L�schen aus lagerListe
	bool isAvailable(Artikel* toCheck);  //�bepr�fen ob in Liste vorhanden unabh�ngig von Menge


	void printOutLager();





};

#endif

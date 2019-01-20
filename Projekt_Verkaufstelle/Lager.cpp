#include "Lager.h"

Lager::Lager(const Lager &toCopy)
{
	lagerList = toCopy.lagerList;
}

bool Lager::addItem(LagerArtikel* toAdd)
{
	bool success = true;
	if (isAvailable(toAdd)) //Eintrag vorhanden
	{
		cout << "FEHLER: Artikel bereits vorhanden" << endl;
		success = false;
	}
	else
	{
		lagerList.push_back(toAdd);
	}
	return success;
}

bool Lager::addItem(Artikel * toAdd)
{
	LagerArtikel tmp = LagerArtikel(toAdd->getName(), toAdd->getPreisEK(), toAdd->getPreisVK(), toAdd->getEAN(), 1);
	return addItem(&tmp);
}

bool Lager::removeItemFromStorage(LagerArtikel* toRemove)
{
	bool success = true;
	if (isAvailable(toRemove)) //Eintrag vorhanden
	{
		lagerList.remove(toRemove);
	}
	else
	{
		cout << "FEHLER: Artikel nicht im Lager vorhanden" << endl;
		success = false;
	}
	return success;
}

bool Lager::isAvailable(Artikel* toCheck)
{
	bool status = false;
	if (find(lagerList.begin(), lagerList.end(), toCheck) != lagerList.end()) 
	{
		status = true;
	}
	return status;
}

void Lager::printOutLager()
{
	cout << "Lager: " << lagerList.size() << endl;
	for (auto element : lagerList)
	{
		//cout << element->getName() << endl;
	}
	cout << endl;
}
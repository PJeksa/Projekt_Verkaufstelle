#include "Lager.h"

Lager::Lager(const Lager &toCopy)
{
	lagerList = toCopy.lagerList;
}

bool Lager::addItem(const Artikel &toAdd)
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

bool Lager::removeItemFromStorage(const Artikel &toRemove)
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

bool Lager::isAvailable(const Artikel &toCheck)
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
	for (list<Artikel>::iterator i = lagerList.begin(); i != lagerList.end(); i++)
	{
		cout << i->getName() << endl;
	}
	cout << endl;
}
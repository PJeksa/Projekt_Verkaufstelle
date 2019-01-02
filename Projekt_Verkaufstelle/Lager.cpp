#include "Lager.h"

Lager::Lager()
{
	lagerList = list<Artikel>();
}

Lager::Lager(const Lager &toCopy)
{
	lagerList = toCopy.lagerList;
}

Lager::~Lager()
{

}

bool Lager::addArtikel(Artikel toAdd)
{
	bool success = true;
	if (find(lagerList.begin(), lagerList.end(), toAdd) != lagerList.end()) //Eintrag vorhanden
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

bool Lager::removeArtikelFromLager(Artikel toRemove)
{
	bool success = true;
	if (find(lagerList.begin(), lagerList.end(), toRemove) != lagerList.end()) //Eintrag vorhanden
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

bool Lager::isAvailable(Artikel toCheck, int menge)
{
	bool status = false;
	if (find(lagerList.begin(), lagerList.end(), toCheck) != lagerList.end()) 
	{
		if (toCheck.getBestand >= menge)
			status = true;
	}
	return status;
}

bool Lager::takeFromLager(Artikel toTake, int menge)
{
	bool status = true;
	if (isAvailable(toTake, menge))
	{
		for (list<Artikel>::iterator i = lagerList.begin(); i != lagerList.end(); i++)
		{
			if (toTake == *i)
			{
				
			}
		}
	}



	return status;
}

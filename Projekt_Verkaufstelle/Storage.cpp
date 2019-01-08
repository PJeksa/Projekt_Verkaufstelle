#include "Storage.h"

Storage::Storage(const Storage &toCopy)
{
	lagerList = toCopy.lagerList;
}

void Storage::addItem(const Artikel &toAdd)
{
	lagerList.push_back(toAdd);
}

void Storage::removeItem(const Artikel &toRemove)
{
	lagerList.remove(toRemove);
}

bool Storage::isAvailable(const Artikel &toCheck)
{
	bool status = false;
	if (find(lagerList.begin(), lagerList.end(), toCheck) != lagerList.end()) 
	{
		status = true;
	}
	return status;
}

void Storage::printOutStorage()
{
	cout << "Storage: " << this->getNubmerOfItems() << endl;
	for (list<Artikel>::iterator i = lagerList.begin(); i != lagerList.end(); i++)
	{
		cout << i->getName() << endl ;
	}
	cout << endl;
}

int Storage::getNubmerOfItems()
{
	return lagerList.size();
}

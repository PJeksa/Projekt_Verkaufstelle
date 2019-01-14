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

bool Storage::isAvailable(Artikel &toCheck)
{
	bool status = false;
	if (getNumberOfItem(toCheck) > 0)
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

int Storage::getNumberOfItem(Artikel& tocheck)
{
	int count = 0;
	for (list<Artikel>::iterator i = lagerList.begin(); i != lagerList.end(); i++)
	{
		if (tocheck == (*i))
		{
			count++;
		}
	}
	return count;
}

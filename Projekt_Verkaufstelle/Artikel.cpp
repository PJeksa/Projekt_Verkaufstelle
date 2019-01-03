#include "Artikel.h"

Artikel::Artikel(string strName, int iPreisEK, int pPreisVK, int iBestand, long lEAN)
{
	this->strName = strName;
	this->iPreisEK = iPreisEK;
	this->iPreisVK = iPreisVK;
	this->iBestand = iBestand;
	this->lEAN = lEAN;
}

Artikel::Artikel(const Artikel &toCopy)
{
	strName = toCopy.strName;
	iPreisEK = toCopy.iPreisEK;
	iPreisVK = toCopy.iPreisVK;
	iBestand = toCopy.iBestand;
	lEAN = toCopy.lEAN;
}

string Artikel::getName()
{
	return strName;
}

void Artikel::setName(string newName)
{
	strName = newName;
}

int Artikel::getPreisEK()
{
	return iPreisEK;
}

void Artikel::setPreisEK(int iPreisEK)
{
	this->iPreisEK = iPreisEK;
}

int Artikel::getPreisVK()
{
	return iPreisVK;
}

void Artikel::setPreisVK(int iPreisVK)
{
	this->iPreisVK = iPreisVK;
}

int Artikel::getBestand()
{
	return iBestand;
}

void Artikel::setBestand(int newBestand)
{
	iBestand = newBestand;
}

long Artikel::getEAN()
{
	return lEAN;
}

void Artikel::setEAN(long lEAN)
{
	this->lEAN = lEAN;
}

bool Artikel::operator==(const Artikel &toCompareTo)
{
	return this->lEAN == toCompareTo.lEAN;
}
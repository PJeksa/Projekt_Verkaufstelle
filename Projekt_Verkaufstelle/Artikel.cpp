#include "Artikel.h"

Artikel::Artikel(string strName, int iPreisEK, int iPreisVK, long lEAN)
{
	this->strName = strName;
	this->iPreisEK = iPreisEK;
	this->iPreisVK = iPreisVK;
	this->lEAN = lEAN;
}

Artikel::Artikel(const Artikel &toCopy)
{
	strName = toCopy.strName;
	iPreisEK = toCopy.iPreisEK;
	iPreisVK = toCopy.iPreisVK;
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


long Artikel::getEAN()
{
	return lEAN;
}

void Artikel::setEAN(long lEAN)
{
	this->lEAN = lEAN;
}

string Artikel::toString()
{
	string response = "";
	response += "Name: " + getName() + "\n";
	response += "PreisEK: " + to_string(getPreisEK()) + "\n";
	response += "PreisVK: " + to_string(getPreisVK()) + "\n";
	response += "EAN: " + to_string(getEAN()) + "\n";
	return response;
}

bool Artikel::operator==(const Artikel &toCompareTo)
{
	return this->lEAN == toCompareTo.lEAN;
}

#include "Artikel.h"

Artikel::Artikel(string name, int preis, int bestand)
{
	strName = name;
	iPreis = preis;
	iBestand = bestand;
}

Artikel::Artikel(const Artikel &toCopy)
{
	strName = toCopy.strName;
	iPreis = toCopy.iPreis;
	iBestand = toCopy.iBestand;
}

Artikel::~Artikel()
{

}

string Artikel::getName()
{
	return strName;
}

void Artikel::setName(string newName)
{
	strName = newName;
}

int Artikel::getPreis()
{
	return iPreis;
}

void Artikel::setPreis(int newPreis)
{
	iPreis = newPreis;
}

int Artikel::getBestand()
{
	return iBestand;
}

void Artikel::setBestand(int newBestand)
{
	iBestand = newBestand;
}

bool Artikel::operator==(const Artikel &toCompareTo)
{
	bool response = true;
	if (strName != toCompareTo.strName)
		response = false;
	else if (iPreis != toCompareTo.iPreis)
		response = false;
	else if (iBestand != toCompareTo.iBestand)
		response = false;
	return response;
}
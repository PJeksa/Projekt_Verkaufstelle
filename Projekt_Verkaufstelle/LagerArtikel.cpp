#include "LagerArtikel.h"

LagerArtikel::LagerArtikel(string strName, int iPreisEK, int iPreisVK, long lEAN, int iBestand) : Artikel(strName, iPreisEK, iPreisVK, lEAN)
{
	this->iBestand = iBestand;
}

int LagerArtikel::getBestand()
{
	return iBestand;
}

void LagerArtikel::setBestand(int iBestand)
{
	this->iBestand = iBestand;
}

string LagerArtikel::toString()
{
	string response = Artikel::toString();
	response += "\nBestand" + this->getBestand();
	return response;
}
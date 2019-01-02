#include "Kunde.h"

Kunde::Kunde(string name, string vorname, string ort, string strasse, string plz, int geld)
{
	strName = name;
	strVorname = vorname;
	strOrt = ort;
	strStrasse = strasse;
	strPLZ = plz;
	iGeld = geld;
}

Kunde::Kunde(const Kunde &newKunde)
{
	strName = newKunde.strName;
	strVorname = newKunde.strVorname;
	strOrt = newKunde.strOrt;
	strStrasse = newKunde.strStrasse;
	strPLZ = newKunde.strPLZ;
	iGeld = newKunde.iGeld;
}

Kunde::~Kunde()
{

}

string Kunde::getName()
{
	return strName;
}

void Kunde::setName(string newName)
{
	strName = newName;
}

string Kunde::getVorname()
{
	return strVorname;
}

void Kunde::setVorname(string newVorname)
{
	strVorname = newVorname;
}

string Kunde::getOrt()
{
	return strOrt;
}

void Kunde::setOrt(string newOrt)
{
	strOrt = newOrt;
}

string Kunde::getStrasse()
{
	return strStrasse;
}

void Kunde::setStrasse(string newStrasse)
{
	strStrasse = newStrasse;
}

string Kunde::getPLZ()
{
	return strPLZ;
}

void Kunde::setPLZ(string newPLZ)
{
	strPLZ = newPLZ;
}

int Kunde::getGeld()
{
	return iGeld;
}

void Kunde::setGeld(int newGeld)
{
	iGeld = newGeld;
}



string Kunde::toString()
{
	string response = "";
	response += "Name: " + strName + "\n";
	response += "Vorname: " + strVorname + "\n";
	response += "Strasse: " + strStrasse + "\n";
	response += "PLZ/Ort: " + strPLZ + " " + strOrt + "\n";
	return response;
}
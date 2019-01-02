#ifndef _KUNDE_H
#define _KUNDE_H

#include <string>
using namespace std;


class Kunde
{
private:
	string strName;
	string strVorname;
	string strOrt;
	string strStrasse;
	string strPLZ;
	int iGeld;


public:
	Kunde(string name, string vorname, string ort, string strasse, string plz, int geld);
	Kunde(const Kunde &newKunde);
	~Kunde();


	string getName();
	void setName(string newName);
	string getVorname();
	void setVorname(string newVorname);
	string getOrt();
	void setOrt(string newOrt);
	string getStrasse();
	void setStrasse(string newStrasse);
	string getPLZ();
	void setPLZ(string newPLZ);
	int getGeld();
	void setGeld(int newGeld);


	string toString();
};


#endif

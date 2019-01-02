#ifndef _ARTIKEL_H
#define _ARTIKEL_H

#include <string>
using namespace std;

class Artikel
{
private:
	string strName;
	int iPreis;
	int iBestand;

public:
	Artikel(string name, int preis, int bestand);
	Artikel(const Artikel &toCopy);
	~Artikel();

	string getName();
	void setName(string newName);
	int getPreis();
	void setPreis(int newPreis);
	int getBestand();
	void setBestand(int newBestand);

	bool operator==(const Artikel &toCompareTo);

};


#endif

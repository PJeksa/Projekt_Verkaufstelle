#ifndef _ARTIKEL_H
#define _ARTIKEL_H

#include <string>
using namespace std;

class Artikel
{
private:
	string strName;
	int iPreisEK;
	int iPreisVK;
	int iBestand;
	long lEAN;

public:
	Artikel() = delete;
	Artikel(string strName, int iPreisEK, int iPreisVK, int iBestand, long lEAN);
	Artikel(const Artikel &toCopy);
	~Artikel() = default;

	string getName();
	void setName(string strName);
	int getPreisEK();
	void setPreisEK(int iPreisEK);
	int getPreisVK();
	void setPreisVK(int iPreisVK);
	int getBestand();
	void setBestand(int iBestand);
	long getEAN();
	void setEAN(long lEAN);
	   
	bool operator==(const Artikel &toCompareTo);

};


#endif

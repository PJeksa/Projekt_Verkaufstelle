#ifndef _ARTIKEL_H
#define _ARTIKEL_H

#include <string>
//#include "LagerArtikel.h"
using namespace std;

class Artikel
{
protected:
	string strName = "";
	int iPreisEK = 0;
	int iPreisVK= 0;
	long lEAN = 0;

public:
	Artikel() = delete;
	Artikel(string strName, int iPreisEK, int iPreisVK, long lEAN);
	Artikel(const Artikel &toCopy);
	virtual ~Artikel() = default;

	string getName() const;
	void setName(string strName);
	int getPreisEK() const;
	void setPreisEK(int iPreisEK);
	int getPreisVK() const;
	void setPreisVK(int iPreisVK);
	long getEAN() const;
	void setEAN(long lEAN);

	string toString();
	   
	bool operator==(const Artikel &toCompareTo);
};


#endif

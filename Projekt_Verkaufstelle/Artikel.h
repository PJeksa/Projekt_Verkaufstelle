#ifndef _ARTIKEL_H
#define _ARTIKEL_H

#include <string>
using namespace std;

class Artikel
{
protected:
	string strName;
	int iPreisEK;
	int iPreisVK;
	long lEAN;

public:
	Artikel() = delete;
	Artikel(string strName, int iPreisEK, int iPreisVK, long lEAN);
	Artikel(const Artikel &toCopy);
	virtual ~Artikel() = default;

	string getName();
	void setName(string strName);
	int getPreisEK();
	void setPreisEK(int iPreisEK);
	int getPreisVK();
	void setPreisVK(int iPreisVK);
	long getEAN();
	void setEAN(long lEAN);
	   
	bool operator==(const Artikel &toCompareTo);

};


#endif

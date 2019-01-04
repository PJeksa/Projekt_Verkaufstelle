#ifndef _LAGERARTIKEL_H_
#define _LAGERARTIKEL_H_

using namespace std;
#include "Artikel.h"

class LagerArtikel : public Artikel
{
private:
	int iBestand;
	bool bLag;

public:
	LagerArtikel() = delete;
	LagerArtikel(string strName, int iPreisEK, int iPreisVK, long lEAN, int iBestand);
	~LagerArtikel() = default;

	int getBestand();
	void setBestand(int iBestand);
	bool isLag();
	void setLag(bool bLag);
};


#endif

#ifndef _VERKAUFEINKAUF_H_
#define _VERKAUFEINKAUF_H_

#include "Store.h"
#include "LagerArtikel.h"
#include <cmath>


class VerkaufEinkauf : public Store
{

public:
	VerkaufEinkauf() = delete;
	VerkaufEinkauf(Storage *sStorage, int iMoney);
	~VerkaufEinkauf() = default;


	void verkaufArtikel(LagerArtikel &toSell, int menge);
	bool einkaufArtikel(Artikel &toBuy, int menge);
};


#endif

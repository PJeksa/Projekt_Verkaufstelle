#ifndef _STORE_H_
#define _STORE_H_

#include "Storage.h"
using namespace std;



class Store
{

protected:
	Storage * sStorage;
	int iMoney;

public:

	Store() = delete;
	Store(Storage * sStorage, int iMoney = 0);
	virtual ~Store() = default;

	int getMoney();
	void setMoney(int iMoney);
	void addMoney(int iMoney);
};


#endif
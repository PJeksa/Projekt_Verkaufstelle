#ifndef _STORE_H_
#define _STORE_H_

#include "Storage.h"
using namespace std;



class Store
{

private:
	int money;
	Storage lager;

public:

	Store() = delete;
	Store(Storage lager, int money = 0);
	virtual ~Store() = default;

	int getMoney();
	void setMoney(int money);
	void addMoney(int money);
};


#endif
#include "Store.h"

Store::Store(Storage * sStorage, int money)
{
	this->sStorage = sStorage;
	this->iMoney = money;
}

int Store::getMoney()
{
	return this->iMoney;
}

void Store::setMoney(int money)
{
	this->iMoney = money;
}

void Store::addMoney(int money)
{
	this->iMoney = this->getMoney() + money;
}
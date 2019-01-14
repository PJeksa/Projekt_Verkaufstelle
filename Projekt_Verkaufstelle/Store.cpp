#include "Store.h"

Store::Store(Storage lager, int money)
{
	this->money = money;
	this->lager = lager;
}

int Store::getMoney()
{
	return this->money;
}

void Store::setMoney(int money)
{
	this->money = money;
}

void Store::addMoney(int money)
{
	this->money = this->getMoney() + money;
}
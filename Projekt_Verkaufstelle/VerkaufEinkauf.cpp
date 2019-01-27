#include "VerkaufEinkauf.h"

VerkaufEinkauf::VerkaufEinkauf(Storage * sStorage, int iMoney) : Store(sStorage, iMoney)
{
	
}

void VerkaufEinkauf::verkaufArtikel(LagerArtikel &toSell,int menge)
{
	if (menge < 1) return; //Wenn menge == 0 oder kleiner 0 wirds unterbrochen
	if (sStorage->isAvailable(toSell))
	{
		list<LagerArtikel>::iterator selling = find(sStorage->getList().begin(), sStorage->getList().end(), toSell);

		if (selling != sStorage->getList().end())
		{
			if (selling->getBestand() >= menge)
			{
				selling->setBestand(selling->getBestand() - menge);
				iMoney += selling->getPreisVK() * menge;
			}
			else
			{
				//TODO: LagerArtikel um mindest lagermenge erweitern, sodass nicht nur die fehldene Anzahl eingekauft wird sondern auch Lager aufgefüllt wird.
				bool einkaufErfolg = false;
				int iToOrder = abs(selling->getBestand() - menge);
				selling->setBestand(0);
				iMoney += selling->getPreisVK() * menge;
				einkaufErfolg = einkaufArtikel(*selling, iToOrder);
				if (einkaufErfolg)
				{
					selling->setBestand(selling->getBestand() - iToOrder);
				}

			}
		}

		//for (list<LagerArtikel>::iterator selling = sStorage->getList().begin(); selling != sStorage->getList().end(); selling++)
		//{
		//	if (*selling == toSell)
		//	{
		//		if (selling->getBestand() >= menge)
		//		{
		//			selling->setBestand(selling->getBestand() - menge);
		//			iMoney += selling->getPreisVK() * menge;
		//		}
		//		else
		//		{
		//			int iToOrder = abs(selling->getBestand() - menge);
		//			selling->setBestand(0);
		//			//einkauf.order(selling,iToOrder);
		//		}
		//	}
		//}
	}
	else
	{
		cout << "Verkauf nicht m\x94glich, Artikel in dieser Menge nicht an Lager vorhanden." << endl;
	}
}

bool VerkaufEinkauf::einkaufArtikel(Artikel & toBuy, int menge)
{
	bool status = false;
	list<LagerArtikel>::iterator buying = find(sStorage->getList().begin(), sStorage->getList().end(), toBuy);
	if (buying != sStorage->getList().end())
	{
		cout << "Einkauf von " << buying->getName() << ", Menge: " << menge << endl;
		buying->setBestand(buying->getBestand() + menge);
		iMoney -= toBuy.getPreisEK() * menge;
		status = true;
	}
	return status;
}

#include <iostream>
#include "Artikel.h"
#include "Kunde.h"
#include "Storage.h"
#include "Verkauf.h"
#include "LagerArtikel.h"

/*
Baue eine kleine Warenwirtschaft mit Lager und Verkauf und Einkauf.

Verkauft werden kann ein Artikel zu einem Preis der auf Lager ist.
Ist er nicht auf Lager muss er bestellt werden.
Man muss den Artikel natürlich auch finden können.
Verkauft wird er zu Preis 1
Gekauft wird er zu Preis 2

-> Erweiterung:
Du kannst an Kunden verkaufen.
Kunde kann gesucht werden.
Kunde 1 erhält einen Rabatt von x %
Kunde 2 erhält einen Rabatt von x Eur
Kunde 3 erhält keinen Rabatt weil wir den nicht mögen.
*/



int main()
{
	Artikel a1 = Artikel("Artikel1", 1, 45, 1234567);
	Artikel a2 = Artikel("Artikel2", 2, 3, 1234569);

	Storage l1 = Storage();

	l1.addItem(&a1);
	l1.printOutStorage();


	LagerArtikel la1 = LagerArtikel("LagerArtikel1", 1, 2, 123456787, 0);
	LagerArtikel l21 = LagerArtikel("LagerArtikel2", 2, 3, 123816787, 0);


	l1.printOutStorage();


	Verkauf v = Verkauf(l1);
	v.verkaufArtikel(la1, 0);
	

	cout << "main" << endl;
	cin.sync(); cin.get();
	return 0;
}
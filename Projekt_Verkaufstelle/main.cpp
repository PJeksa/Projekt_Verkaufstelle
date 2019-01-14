#include <iostream>
#include "Artikel.h"
#include "Kunde.h"
#include "Storage.h"

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
	Artikel a1 = Artikel("Artikel1", 1, 2, 123456789);
	Artikel a2 = Artikel("Artikel2", 2, 3, 213456798);
	Artikel a3 = Artikel("Artikel3", 3, 5, 321456845);

	Storage s1 = Storage();
	s1.printOutStorage();
	
	s1.addItem(a1);
	s1.addItem(a2);
	s1.addItem(a2);
	s1.addItem(a2);
	s1.addItem(a2);
	s1.addItem(a2);
	s1.addItem(a3);

	cout << "Is a1 available?: " << s1.isAvailable(a1) << endl;
	cout << "Is a2 available?: " << s1.isAvailable(a2) << endl;
	cout << "Is a3 available?: " << s1.isAvailable(a3) << endl;

	s1.printOutStorage();
	cout << "Number of Item a2: " << s1.getNumberOfItem(a2) << endl;

	s1.removeItem(a2);

	s1.printOutStorage();
	cout << "Number of Item a2: " << s1.getNumberOfItem(a2) << endl;

	s1.removeItem(a2);

	s1.printOutStorage();

	a2 = a3;

	s1.removeItem(a2);

	s1.printOutStorage();

	cout << "main" << endl;
	cin.sync(); cin.get();
	return 0;
}
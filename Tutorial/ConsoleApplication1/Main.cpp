//Standardbib f�r ausgabe von Text auf der Konsole
#include <iostream>					//erm�glicht uns die benutzung des Datentyps string
#include <string>					//erspart uns vor jeder Fkt das srd::
using namespace std;

int Rechnen(int a, int b)
{
	int temp = a+b;
	return temp;
}

//Einstiegspkt
int main()
{
	//1 Ausgabe
	/* 1
	int izahl;
	int iMinus;
	int iErgebnis;

	izahl =2;
	iMinus = 6;
	iErgebnis =iMinus + izahl;

	cout << iErgebnis ;
	cout << "\n";
	iErgebnis =iMinus - izahl;
	cout << iErgebnis;
	cout << "\n";
	iErgebnis =iMinus * izahl;
	cout << iErgebnis ;
	cout << "\n";
	iErgebnis =iMinus / izahl;

	cout << iErgebnis ;
	cout << "\n  Hallo Welt jetzt mit git";  //Console Output
	cout << "\n  Am Lappi ge�ndert";  //Console Output
	*/
	// 2 Euro Dollar umrechner
	/*
	float fFaktor;
	float fEuro;
	float fDollar;
	fFaktor = 1.22;
	cout << "Euro/Dollar Rechner" << endl
		<<"Bitte geben sie die Zahl in Euro ein, zum umrechnen" <<endl; //ausgabe

	cin >> fEuro; //Programm wartet auf eingabe von fEuro

	fDollar = fEuro * fFaktor ;
	getchar() ;
	cout <<fEuro << " sind " << fDollar << endl;
	*/
	// 3 IF
	/*
	int iGold = 500;
	int iPreis = 490;

	cout << "Gold: " ;
	cin >> iGold ;

	getchar ();

	if (iGold >= iPreis)
	{
		cout << "Einheit erstellt" << endl;
	}
	else
	{
		cout << " Zu wenig Geld um Einheiten zu erstellen" <<endl ;
	}
	*/
	// 4 While
	/*
	int iGold;
	int iPreis = 10;
	int Z�hler =0;

	cout << "Bitte Gold eingeben" << endl ;
	cin >> iGold ;
	getchar();

	while(iGold >= iPreis)
	{
		Z�hler ++;
		cout << " Einheit nr.: "<<Z�hler<< "wurde erfolgreich erstellt" << endl;
		iGold = iGold - iPreis ;
	}*/
	// 6 Arrays und Schleifen
	/*
	int Z�hler = 0;
	int i =0;
	//1 = Heiltrank
	//2 = Mana
	//3 = Schild
	//4 = Schwert
	//5 = R�stung

	int Inventar[10];

	Inventar[0] = 1;
	Inventar[1] = 1;
	Inventar[2] = 2;
	Inventar[3] = 2;
	Inventar[4] = 3;
	Inventar[5] = 3;
	Inventar[6] = 4;
	Inventar[7] = 4;
	Inventar[8] = 5;
	Inventar[9] = 5;

	while(Z�hler <= 9)
	{
		if(Inventar[i] == 1)
		{
			cout << "Inventarplatz " << i << " ist ein Heiltrank"<< endl ;
		}
		if(Inventar[i] == 2)
		{
			cout << "Inventarplatz " << i << " ist Mana"<< endl ;
		}
		if(Inventar[i] == 3)
		{
			cout << "Inventarplatz " << i << " ist ein Schild"<< endl ;
		}
		if(Inventar[i] == 4)
		{
			cout << "Inventarplatz " << i << " ist ein Schwert" << endl ;
		}
		if(Inventar[i] == 5)
		{
			cout << "Inventarplatz " << i << " ist R�stung"<< endl;
		}
		i++;
		Z�hler++;
	}
	*/
	// 7 Funktionen

	int C=6;
	int D=2;

	
	cout << "in Main "<< Rechnen(C,D) <<endl;
	getchar();

	//Erfolgreich beendet
		return 0;
}
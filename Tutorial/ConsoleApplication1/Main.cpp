//Erstes Programm
//Standardbib für ausgabe von Text auf der Konsole
#include <iostream> 
//ermöglicht uns die benutzung des Datentyps string
#include <string>

//erspart uns vor jeder Fkt das srd::
using namespace std;


//Einstiegspkt
int main()
{
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
	getchar();

	//Erfolgreich beendet
		return 0;
}
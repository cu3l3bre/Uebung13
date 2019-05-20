#include <iostream>
#include "datum.h"
#include "zeitdatum.h"



using namespace std;


int main()
{
	cout << "Programm zu Uebung13" << endl << endl;

	//Datum heute;
	Datum heute(22,5,2019);

	//heute.zeigeDatum();
	//heute.zeigeDatumAmericanStyle();


	//Zeitdatum zeit(33,44);
	Zeitdatum zeit(2019, 05, 20, 15, 30);
	

	// Hole aktuelle Systemzeit
	zeit.getDatumHeute();
	zeit.getZeitJetzt();

	//zeit.zeigeUhrzeit();
	zeit.zeigeDatumUhrzeit();


	//zeit.zeigeUhrzeitAmericanStyle();
	zeit.zeigeDatumUhrzeitAmericanStyle();



	int eingabeJahr = 0;
	int eingabeMonat = 0;
	int eingabeTag = 0;
	int eingabeStunde = 0;
	int eingabeMinute = 0;

	cout << endl;
	cout << "Geben Sie nachfolgend Werte fuer das Datum und die Uhrzeit ein" << endl;

	cout << "Geben Sie das Jahr ein (z.B. 2012): ";
	cin >> eingabeJahr;
	zeit.setJahr(eingabeJahr);

	cout << "Geben Sie den Monat ein [1-12]: ";
	cin >> eingabeMonat;
	zeit.setMonat(eingabeMonat);

	cout << "Geben Sie den Tag ein [1-31]: ";
	cin >> eingabeTag;
	zeit.setTag(eingabeTag);


	cout << "Geben Sie die Stunden ein [0-23]: ";
	cin >> eingabeStunde;
	zeit.setStunde(eingabeStunde);

	cout << "Geben Sie die Minuten ein [0-59]: ";
	cin >> eingabeMinute;
	zeit.setMinute(eingabeMinute);


	cout << "Ihre Eingabe lautet wie folgt" << endl << endl;



	zeit.zeigeDatumUhrzeit();
	zeit.zeigeDatumUhrzeitAmericanStyle();


	system("pause");
	return 0;
}
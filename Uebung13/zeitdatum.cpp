
#include <iostream>
#include <iomanip>
#include "datum.h"
#include "zeitdatum.h"


using namespace std;


// Standard
Zeitdatum::Zeitdatum()
{
	setTag(66);
	setMonat(77);
	setJahr(88);

	stunde = 0;
	minute = 0;
}


//Allgemein
Zeitdatum::Zeitdatum(int neuStunde, int neuMinute)
{
	stunde = neuStunde;
	minute = neuMinute;
}


// Allgemein
Zeitdatum::Zeitdatum(int neuJahr, int neuMonat, int neuTag, int neuStunde, int neuMinute)
{
	setJahr(neuJahr);
	setMonat(neuMonat);
	setTag(neuTag);
	stunde = neuStunde;
	minute = neuMinute;
}


// Destruktor
Zeitdatum::~Zeitdatum()
{
}


// Methode, um die Uhrzeit anzuzeigen
void Zeitdatum::zeigeUhrzeit()
{
	cout << "Die Uhrzeit lautet: " << setw(2) << setfill('0') << stunde << ":" << setw(2) << setfill('0') << minute << endl;

}

// Methode, um das Datum und die Uhrzeit anzuzeigen
void Zeitdatum::zeigeDatumUhrzeit()
{
	cout << "Es erfolgt die Ausgabe des Datums und der Uhrzeit" << endl;
	zeigeDatum();
	zeigeUhrzeit();

}
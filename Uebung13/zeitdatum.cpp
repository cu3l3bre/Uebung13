
#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>
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
Zeitdatum::Zeitdatum(int neuJahr, int neuMonat, int neuTag, int neuStunde, int neuMinute) : Datum(neuTag, neuMonat, neuJahr)
{
	//setJahr(neuJahr);
	//setMonat(neuMonat);
	//setTag(neuTag);
	
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



// Methode, um die Uhrzeit American Style anzuzueigen
void Zeitdatum::zeigeUhrzeitAmericanStyle()
{
	string ampm = " am";

	if (stunde >= 12)
	{
		stunde = stunde - 12;
		ampm = " pm";
	}
	else
	{
		ampm = " am";
	}

	cout << "Die Uhrzeit American Style lautet: " << setw(2) << setfill('0') << stunde << ":" << setw(2) << setfill('0') << minute << ampm << endl;
}



// Methode, um das Datum und die Uhrzeit American Style anzuzueigen
void Zeitdatum::zeigeDatumUhrzeitAmericanStyle()
{

	cout << "Es erfolgt die Ausgabe des Datums und der Uhrzeit in American Style" << endl;
	zeigeDatumAmericanStyle();
	zeigeUhrzeitAmericanStyle();


}


// Methode, um die aktuelle Systemzeit zu holen
void Zeitdatum::getZeitJetzt()
{
	time_t zeitJetzt;
	tm jetztLokal;

	// Aktuelle Systemzeit im Unix Timestamp Format
	zeitJetzt = time(0);
	localtime_s(&jetztLokal, &zeitJetzt);
	
	stunde = jetztLokal.tm_hour;
	minute = jetztLokal.tm_min;

}
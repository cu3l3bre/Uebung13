
#include <iostream>
#include <iomanip>
#include <ctime>
#include "datum.h"



using namespace std;


// Standard
Datum::Datum()
{
	tag = 20;
	monat = 5;
	jahr = 2019;

}


// Allgemein
Datum::Datum(int neuTag, int neuMonat, int neuJahr)
{
	tag = neuTag;
	monat = neuMonat;
	jahr = neuJahr;
}


// Destruktor
Datum::~Datum()
{
}


// Methode, um das Datum anzuzeigen
void Datum::zeigeDatum()
{
	cout << "Das heutige Datum lautet: "  << setw(2) << setfill('0') << tag << "." << setw(2) << setfill('0') << monat << "." << jahr << endl;
}


// Methode, um die Uhrzeit American Style anzuzueigen
void Datum::zeigeDatumAmericanStyle()
{
	cout << "Das heutige Datum American Style lautet: " << setw(2) << setfill('0') << monat << "/" << setw(2) << setfill('0') << tag << "/" << jahr << endl;
}

// Methode, um die aktuelle Systemzeit zu holen
void Datum::getDatumHeute()
{
	time_t zeitJetzt;
	tm jetztLokal;

	// Aktuelle Systemzeit im Unix Timestamp Format
	zeitJetzt = time(0);
	localtime_s(&jetztLokal, &zeitJetzt);

	jahr = jetztLokal.tm_year+1900;
	monat = jetztLokal.tm_mon+1;
	tag = jetztLokal.tm_mday;

}
#pragma once


#include "datum.h"


using namespace std;


class Zeitdatum : public Datum
{
private:
	int stunde;
	int minute;


public:
	Zeitdatum();						// Standard
	Zeitdatum(int, int);				// Allgemein
	Zeitdatum(int, int, int, int, int);	// Allgemein
	~Zeitdatum();						// Destruktor

	//Getter
	int getStunde() { return stunde; }
	int getMinute() { return minute; }


	//Setter
	void setStunde(int neuStunde) { stunde = neuStunde; }
	void setMinute(int neuMinute) { minute = neuMinute; }

	// andere Methoden
	void zeigeUhrzeit();
	void zeigeDatumUhrzeit();

};
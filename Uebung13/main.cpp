#include <iostream>
#include "datum.h"
#include "zeitdatum.h"

using namespace std;


int main()
{
	cout << "Porgramm zu Uebung13" << endl << endl;

	//Datum heute;
	Datum heute(22,5,2019);

	heute.zeigeDatum();
	heute.zeigeDatumAmericanStyle();


	//Zeitdatum zeit(33,44);
	Zeitdatum zeit(2222, 12, 13, 24, 30);
	
	zeit.zeigeUhrzeit();
	zeit.zeigeDatumUhrzeit();




	system("pause");
	return 0;
}
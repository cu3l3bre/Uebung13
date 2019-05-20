#pragma once



using namespace std;




class Datum
{
private:
	int tag;
	int monat;
	int jahr;

public:

	Datum();
	Datum(int, int, int);
	~Datum();

	// getter
	int getTag() { return tag; }
	int getMonat() { return monat; }
	int getJahr() { return jahr; }


	// Setter
	void setTag(int neuTag) { tag = neuTag; }
	void setMonat(int neuMonat) { monat = neuMonat; }
	void setJahr(int neuJahr) { jahr = neuJahr; }

	// andere Methoden
	void zeigeDatum();
	void zeigeDatumAmericanStyle();
	
	void getDatumHeute();




};
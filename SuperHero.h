//SuperHero.h
#include "Header.h"

class SuperHero
{
public:

	SuperHero();
	SuperHero(string fn, string ln, string hn, string U, string sp);


	void SuperHero(string fn, string ln, string hn, string U, string sp);
	 string getFN();
	 string getLN();
	 string getHN();
	 string getU();
	 string getSP();
private:
	string fName;
	string lName;
	string heroName;
	string universe;
	string superPower;

};

SuperHero::SuperHero()
{
	fName = "";
	lName = "";
	heroName = "";
	universe = "";
	superPower = "";
}

SuperHero::SuperHero(string fn, string ln, string hn, string U, string sp)
{
	fName = fn;
	lName = ln;
	heroName = hn;
	universe = U;
	superPower = sp;
}


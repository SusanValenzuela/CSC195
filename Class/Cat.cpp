#include "Cat.h"



void Cat::Read(ostream& ostream, istream& istream)
{
	Base::Read(ostream, istream);
	ostream << "Enter number of lives: ";
	istream >> lives;
}


void Cat::Write(ostream& ostream)
{
	Base::Write(ostream);
	ostream << "Lives: " << lives << endl;
}


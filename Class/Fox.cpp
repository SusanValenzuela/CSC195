#include "Fox.h"


void Fox::Read(ostream& ostream, istream& istream)
{

    Base::Read(ostream, istream);

    ostream << "Enter cunning level: ";
    istream >> cunningLevel;

}

void Fox::Write(ostream& ostream)
{
    Base::Write(ostream);
    ostream << "Cunning Level: " << cunningLevel << endl;
}



#include "Base.h"


void Base::Read(ostream& ostream, istream& istream)
{

    ostream << "Enter name: ";
    istream >> name;


    ostream << "Enter age: ";
    istream >> age;

}

void Base::Write(ostream& ostream)
{

    ostream << "Name: " << name << endl;
    ostream << "Age: " << age << endl;

}


string Base::GetName()
{
    return name;

}

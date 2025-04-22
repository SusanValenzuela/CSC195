#pragma once
#include <string>
#include <iostream>


using namespace std;

class Base {

public:

	enum class eType { FOX, CAT };


	virtual void Read(ostream& ostream, istream& istream);
	virtual void Write(ostream& ostream);

	virtual string GetName();
	virtual eType GetType() = 0;

protected:
	string name;
	int age;


};

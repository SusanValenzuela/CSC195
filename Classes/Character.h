#pragma once
#include <string>
using namespace std;

class Character {
public:
    enum class eType { WARRIOR, MAGE };

    virtual ~Character() = default;

    virtual void Input();   // simplified input
    virtual void Output();  // simplified output

    string GetName() const { return name; }

    virtual eType GetType() = 0;

protected:
    string name;
    int level;
};

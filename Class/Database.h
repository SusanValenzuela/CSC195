#pragma once

#include <vector>
#include "Base.h"
#include "Fox.h"
#include "Cat.h"

class Database {
public:
    ~Database();

    void Create(Base::eType type);
    void DisplayAll();
    void Display(const string& name);
    void Display(Base::eType type);
private:

    vector<Base*> objects;


};

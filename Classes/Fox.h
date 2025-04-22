#pragma once
#include "Base.h"




class Fox : public Base
{
public:
    void Read(ostream& ostream, istream& istream) override;
    void Write(ostream& ostream) override;
    eType GetType() override { return eType::FOX; }


private:
    int cunningLevel;
};

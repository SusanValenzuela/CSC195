#pragma once
#include "Base.h"


class Cat : public Base {
public:
    void Read(ostream& ostream, istream& istream) override;
    void Write(ostream& ostream) override;
    eType GetType() override { return eType::CAT; }
private:
    int lives;
};

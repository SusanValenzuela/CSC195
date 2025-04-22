#pragma once
#include "Character.h"

class Warrior :
public Character {
public:
    void Input() override;
    void Output() override;
    eType GetType() override { return eType::WARRIOR; }

private:
    int strength;
};

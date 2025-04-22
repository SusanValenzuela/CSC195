#pragma once
#include "Character.h"

class Mage : public Character {
public:
    void Input() override;
    void Output() override;
    eType GetType() override { return eType::MAGE; }

private:
    int mana;
};

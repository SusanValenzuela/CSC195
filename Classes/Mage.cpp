#include "Mage.h"
#include <iostream>
using namespace std;

void Mage::Input() {
    Character::Input();
    cout << "Enter mana: ";
    cin >> mana;
}

void Mage::Output() {
    Character::Output();
    cout << "Class: Mage\nMana: " << mana << endl;
}

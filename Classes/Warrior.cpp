#include "Warrior.h"
#include <iostream>
using namespace std;

void Warrior::Input() {
    Character::Input();
    cout << "Enter strength: ";
    cin >> strength;
}

void Warrior::Output() {
    Character::Output();
    cout << "Class: Warrior\nStrength: " << strength << endl;
}

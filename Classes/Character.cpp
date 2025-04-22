#include "Character.h"
#include <iostream>
using namespace std;

void Character::Input() {
    cout << "Enter character name: ";
    cin >> name;
    cout << "Enter level: ";
    cin >> level;
}

void Character::Output() {
    cout << "Name: " << name << "\nLevel: " << level << endl;
}

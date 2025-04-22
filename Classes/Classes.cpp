#include <iostream>
#include <vector>
#include "Character.h"
#include "Warrior.h"
#include "Mage.h"
using namespace std;

int main() {
    vector<Character*> characters;
    bool quit = false;

    while (!quit) {
        cout << "1 - Add Character\n2 - Display All\n3 - Quit\n";
        int choice;
        cin >> choice;

        switch (choice) {
        case 1: {
            cout << "Enter type (0 = Warrior, 1 = Mage): " << endl;
            int type;
            cin >> type;
            Character* new_character = (type == 0) ? new Warrior() : new Mage();
            new_character->Input();
            characters.push_back(new_character);
            break;
        }

        case 2:
            for (Character* new_character : characters) {
                new_character->Output();
            }
            break;

        case 3:
            quit = true;
            break;
        }
    }


    return 0;
}

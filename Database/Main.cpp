#include "Database.h"
#include <iostream>
#include <string>



int main() {
    Database* database = new Database;

    bool running = true;
    while (running) {
        std::cout << "\n1) Create\n2) Display All\n3) Load\n4) Save\n5) Quit\n";
        std::cout << "Choose: ";

        int choice;
        std::cin >> choice;

        if (choice == 1) {  // Create
            std::cout << "Enter type (0 = Dog, 1 = Cat): ";
            int type;
            std::cin >> type;
            auto animal = database->Create(type);
            if (animal) {
                std::cin >> *animal;
                database->Add(std::move(animal));
            }
            else {
                std::cout << "Invalid type!\n";
            }
        }
        else if (choice == 2) {  // Display All
            database->DisplayAll();
        }
        }
        else if (choice == 4) {  // Save
            std::cout << "Enter filename to save: ";
            std::string filename;
            std::cin >> filename;
            database->Save(filename);
        }
        else if (choice == 5) {  // Quit
            running = false;
        }
        else {
            std::cout << "Invalid choice.\n";
        }
    }
    return 0;
}

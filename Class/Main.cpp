#include <iostream>
#include "Database.h"


using namespace std;


int main() {

	Database db;
	bool quit = false;


	while (!quit) {
		cout << "\n1 - Create\n2 - Display All\n3 - Display by Name\n4 - Display by Type\n5 - Quit\n";
		int choice;
		cin >> choice;


		switch (choice) {
		case 1: {
			cout << "Enter type (0 = FOX, 1 = CAT): ";
			int t;
			cin >> t;
			db.Create(static_cast<Base::eType>(t));
			break;
		}
		case 2:
			db.DisplayAll();
			break;
		case 3: {
			cout << "Enter name: ";
			string name;
			cin >> name;
			db.Display(name);
			break;
		}
		case 4: {
			cout << "Enter type (0 = FOX, 1 = CAT): ";
			int t;
			cin >> t;
			db.Display(static_cast<Base::eType>(t));
			break;
		}
		case 5:
			quit = true;
			break;
		default:
			cout << "Invalid option.\n";
		}
	}

	return 0;
}

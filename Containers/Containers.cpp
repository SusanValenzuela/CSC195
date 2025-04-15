
#include <iostream>
#include <vector>
#include <list>
#include <map>
using namespace std;

int main()
{
	cout << "_____________Array_Strings____________" << endl;
	string daysOfWeek[7] = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };

	int size = sizeof(daysOfWeek) / sizeof(daysOfWeek[0]);
	cout << "Number of days in the week: " << size << endl;

	for (int i = 0; i < (*daysOfWeek).size(); i++) {
		cout << daysOfWeek[i] << endl;
	}

	cout << "_____________Vectors____________" << endl;

	vector<int> numbers = { 5, 10, 15, 20, 25 };
	numbers.push_back(30);
	numbers.push_back(35);

	numbers.pop_back();

	for (int i = 0; i < numbers.size(); i++) {
		cout << numbers[i] << endl;
	}

	cout << "____________Lists_____________" << endl;

	list<string> fruit = { "Pineapple", "Grapefruit", "Passionfruit" };

	fruit.push_front("Dragon Fruit");
	fruit.push_back("Starfruit");

	fruit.remove("Pineapple");

	for (string fruit : fruit) {
		cout << fruit << endl;
	}
	cout << "_____________Maps____________" << endl;


	map<string, int> groceries = { { "Beef", 10 }, {"Milk", 4}, {"Eggs", 6} };

	groceries["Eggs"] += 6;


	for (pair<string, int> item : groceries) {
		cout << item.first << ": " << item.second << endl;
	}


}
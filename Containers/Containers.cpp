
#include <iostream>
#include <vector>
#include <list>
#include <map>
using namespace std;

int main()
{
    string fruits[5] = {"Bananna", "Kiwi", "Mango", "Chikoo", "Strawberry"};

    vector<int> numbers;
    numbers.push_back(1);
    numbers.push_back(3);
    numbers.push_back(5);
    numbers.push_back(7);
    numbers.push_back(18);

    numbers.pop_back();
    numbers.pop_back();

    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << endl;
    }
    cout << "_________________________" << endl;

    string chemicals[5] = { "Mercury","Hydrocloric Acid" "Chlorine", "Brownie", "Table Salt" };

    cout << chemicals[2] << endl;
    cout << chemicals << endl;
    cout << chemicals[0] << endl;

    cout << "________________________" << endl;

    for (int i = 0; i < (*chemicals).size(); i++) {
        cout << &chemicals[i] << endl;
    }
    cout << "_________________________" << endl;

    string* p = chemicals;
    cout << p << endl;
    cout << p++ << endl;
    cout << p++ << endl;
    cout << --p << endl;

    cout << p  + 2 << endl;
    cout << "_________________________" << endl;
    //forward linked list single ony one direction -- double linked list -> list -> many directions
    list<string> cars = ("Porsche", "Hyundai", "Mercades", "Volvo");

    cout << cars.front() << endl;
    cout << cars.back() << endl;

    cars.pop_back();
    cout << cars.back()<< endl;

    cars.push_front("Tesla");
    cout << cars.front() << endl;

    map<string, int> pet = { {"Dog", 23}, {"Freaky ahh Gojo", 3}, {"Turtle", 43} };

    //Array vector list map

    
    



}
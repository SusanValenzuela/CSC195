
#include <iostream>
#include <vector>
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
}
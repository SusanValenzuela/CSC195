#include <iostream>
using namespace std;

int main() {
    string name = "Jane Doe";
    char initial = 'D';
    short age = 21;
    bool isAdult = true;
    unsigned int id = 84111;
    float wage = 28.50;
    short daysWorked = 5;
    float hoursWorkedPerDay[7]; // Use an array with max 7 elements
    const float TAX = 0.1f;
    unsigned int zipcode;

    std::cout << "Enter first name: ";
    std::cin >> name;

    std::cout << "Enter initial of last name: ";
    std::cin >> initial;

    std::cout << "Enter age: ";
    std::cin >> age;
    isAdult = (age >= 18);  // Determine adulthood status

    cout << "Enter zipcode: ";
    cin >> zipcode;

    cout << "Enter hourly wage: ";
    cin >> wage;

    cout << "Enter number of days worked (max 7): ";
    cin >> daysWorked;

    float totalHours = 0;

    for (int i = 0; i < daysWorked; i++) {
        std::cout << "Enter hours worked for day " << (i + 1) << ": ";
        std::cin >> hoursWorkedPerDay[i]; // Uses the array

        totalHours += hoursWorkedPerDay[i];  // Accumulate total hours
    }
    float grossIncome = totalHours * wage;
    float taxAmount = grossIncome * TAX;
    float netIncome = grossIncome - taxAmount;

    cout << "\nEmployee Payroll Summary\n";
    cout << "-------------------------\n";
    cout << "Name: " << name << " " << initial << ".\n";
    cout << "Age: " << age << " (Adult: " << (isAdult ? "Yes" : "No") << ")\n";
    cout << "Zipcode: " << zipcode << "\n";
    cout << "Hourly Wage: $" << wage << " per hour\n";
    cout << "Total Hours Worked: " << totalHours << " hours\n";
    cout << "Gross Income: $" << grossIncome << "\n";
    cout << "Tax Amount: $" << taxAmount << "\n";
    cout << "Net Income: $" << netIncome << "\n";

    return 0;




}


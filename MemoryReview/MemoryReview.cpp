#include <iostream>
using namespace std;
struct Person
{
	char name[32];
	int id;
};
void Double(int* soda)
{
	*soda = *soda * 2;
}

void Square(int& pizza)
{
	pizza = pizza * pizza;
}

int main()
{
	// ** REFERENCE **
	// declare an int variable and set the value to some number (less than 10)
	int x = 5;
	// declare a int reference and set it to the int variable above
	int& y = x;

	// output the int variable
	cout << "The x-value is: " << x << endl;
	// set the int reference to some number
	y = 25;
	// output the int variable
	cout << "The y-value is: " << x << endl;
	// what happened to the int variable when the reference was changed? 
	// (chaning the value through reference changes the original int variable since reference is just another name/alias for the original)

	// output the address of the int variable
	// output the address of the int reference

	cout << "Address x-value: " << &x << endl;
	cout << "Address y-value: " << &y << endl;
	// are the addresses the same or different? 
	// (Yes, both of them share the same address)


	// ** REFERENCE PARAMETER **
	// call the Square function with the int variable created in the REFERENCE section
	Square(x);
	// output the int variable to the console
	 cout << "Square(x): " <<x << endl;
	// change the Square function to take a int reference


	// ** POINTER VARIABLE **

	// declare an int pointer, set it to nullptr (it points to nothing)
	 int* ptr = nullptr;
	// set the int pointer to the address of the int variable created in the REFERENCE section
	 ptr = &x;
	// output the value of the pointer
	 cout << "Ptr value:" << ptr << endl;

	// what is this address that the pointer is pointing to? 
	// (It is looking for the memory where x is stored)
 
	// output the value of the object the pointer is pointing to (dereference the pointer)
	 cout << "Ptr is point at: " << *ptr << endl;

	// ** POINTER PARAMETER **

	// call the Double function with the pointer created in the POINTER VARIABLE section
	 Double(ptr);
	// output the dereference pointer
	 cout << "Dereference pointer: " << ptr << endl;
	// output the int variable created in the REFERENCE section
	 cout << "Double(ptr): " << x << endl;
	// did the int variable's value change when using the pointer?
	// (Yes because the pointer pointed to the variables memory)

}
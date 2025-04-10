#include <iostream>
using namespace std;

void set(int& i)
{
    i = 123;
}

void swap(int* i1, int* i2)
{
    int temp = *i1;
    *i1 = *i2;
    *i2 = temp;
}



int main()
{
    int i1 = 10;
    int i2 = 20;

    int& r = i1; //this is a reference type
    r = 40;
    set(i1);
    swap(&i1, &i2);

    int* p = nullptr; // this is a value type -- nullptr is a default value you can assign to a pointer
    p = &i1;

    cout << i1 << endl; // vakue of i1
    cout << i2 << endl; // vakue of i2
    cout << &i1 << endl;    // address of i1
    cout << &r << endl; // address of r i.e., refereces to i1, same as i2
    cout << p << endl;
    cout << &p << endl;

    cout << "_________________________________________" << endl;

    int number1 = 1;
    int* hnum1 = new int;

    int* Arrnum = new int;

}

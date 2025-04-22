

#include <iostream>
#include "Animal.h"
#include "Dog.h"
using namespace std;

int main()
{
    Animal animal;
    animal.Move();

    Dog dog;
    dog.Move();

    Animal* ptrAnimal = new Animal;
    
    (*ptrAnimal).Move();
    ptrAnimal-> Move();

    Animal* ptrDog = new Animal;
    ptrDog->Move();

    cout << animal.GetLimbs() << endl;

    {
        Animal* ptrAnimal = new Animal;

    }

    
}

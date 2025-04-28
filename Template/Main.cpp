#include "TemplateClass.h"
#include <iostream>
using namespace std;

namespace myMethod {
    template<typename T, typename U>
    T max(T i1, U i2)
    {
        return(i1 > i2 ? i1 : i2);
    }
}

int main()
{
    //cout << max(32, 22) << endl;
    cout << myMethod::max(6.56f, 56) << endl;

    TemplateClass<int> tp1;
    TemplateClass<float> tp2;

    TemplateClass<> tp3;

    Array<string, 5> strAr;

    strAr[2] = "Banana";
    
}


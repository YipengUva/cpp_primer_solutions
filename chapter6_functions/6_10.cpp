#include <iostream>
//#include "chapter6.h"

using namespace std;

void swap_yp(int *var1, int *var2);

int main(){

    int var1 = 10, var2 = 20;

    cout << "Before swap: var1 and var2 are: " << var1 << ' ' << var2 << endl;

    swap_yp(&var1, &var2);

    cout << "After swap: var1 and var2 are: " << var1 << ' ' << var2 << endl;

    return 0;
}

void swap_yp(int *var1, int *var2)
{
    int tmp = *var1;

    *var1 = *var2;
    *var2 = tmp;
}

#include <iostream>
#include <string>
//#include "chapter6.h"

using namespace std;

int int_ptr(int x, const int *y_ptr)
{
    return (x > *y_ptr) ? x : (*y_ptr);
}

int main()
{
    int x = 10;
    int y = 20;
    cout << int_ptr(x, &y) << endl;

    return 0;
}

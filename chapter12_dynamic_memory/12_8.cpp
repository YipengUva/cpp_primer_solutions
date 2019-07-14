#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <list>
#include "StrBlob.h"

using namespace std;

int* b()
{
    int* p = new int(10);

    return p;
}

int main()
{
    int *pi = b();
    cout << *pi << endl;

    return 0;
}








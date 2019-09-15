#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <list>
#include "StrBlob.h"

using namespace std;

int main()
{
    int *pa = new int[10];
    delete [] pa;

    return 0;
}

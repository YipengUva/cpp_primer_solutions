#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <list>
#include "StrBlob.h"

using namespace std;

int main()
{
    auto sp = make_shared<int>(1024);
    auto p = sp.get();
    delete p;
    cout << *sp << endl;

    return 0;
}

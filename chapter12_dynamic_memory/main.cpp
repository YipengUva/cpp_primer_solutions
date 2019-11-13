#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <list>
#include "StrBlob.h"

using namespace std;

int main()
{
    shared_ptr<string> p1;
    shared_ptr<list<int>> p2;
    shared_ptr<int> p3 = make_shared<int>(42);
    cout << *p3 << endl;


    return 0;
}

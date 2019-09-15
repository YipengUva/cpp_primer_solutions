#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <list>
#include "StrBlob.h"

using namespace std;

void process(shared_ptr<int> ptr)
{
    cout << ptr.use_count()
         << " pointers to the same object" << endl;
    cout << *ptr << " value." << endl;
}

int main()
{
    shared_ptr<int> p(new int(42));
    process(shared_ptr<int>(p.get()));
    cout << p.use_count() << endl;

    // the object pointed by p is already destroyed
    // when the local smart pointer is out of the scope.

    // *p is undefined. It seems correct result returned in this case.
    cout << *p << endl;


    return 0;
}

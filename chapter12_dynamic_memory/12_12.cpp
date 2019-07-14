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
    auto p = new int();
    auto sp = make_shared<int>();

    process(sp);
    //process( new int() ); //wrong
    //process(p); // wrong
    process(shared_ptr<int>(p));

    return 0;
}

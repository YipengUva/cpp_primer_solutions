#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <list>
#include "StrBlob.h"

using namespace std;

void print(const vector<string> &vs)
{
    for(auto &ele : vs){
        cout << ele << endl;
    }
}

int main()
{
    StrBlob b1 = {"a", "an", "the"};
    print(*b1.get());

    StrBlob b2 = b1;
    print(*b2.get());

    StrBlob b3(b1);
    print(*b3.get());

    return 0;
}


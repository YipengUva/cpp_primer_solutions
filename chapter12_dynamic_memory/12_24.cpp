#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <list>
#include "StrBlob.h"

using namespace std;

int main()
{
    size_t n;
    cout << "input length: ";
    cin >> n;

    unique_ptr<char[]> s(new char[n]);
    cout << "input string: ";
    size_t i = 0;
    char tmp;
    while(cin >> tmp){
        s[i] = tmp;
        ++i;
        cout << tmp;
    }

    return 0;
}

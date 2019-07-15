#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <list>
#include "StrBlob.h"

using namespace std;

int main()
{
    string s1;
    string s2;
    cout << "input two strings: ";
    cin >> s1 >> s2;

    size_t n = s1.size() + s2.size();
    string s3 = s1 + s2;
    unique_ptr<char[]> s(new char[n]);

    for(size_t i = 0; i != n; ++i){
        s[i] = s3[i];
        cout << s[i];
    }
    cout << endl;

    return 0;
}

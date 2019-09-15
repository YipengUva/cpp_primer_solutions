#include <iostream>

using namespace std;

int main()
{
    string s("Hello World!");

    int i = 0;
    while(i < s.size()){
        s[i] = 'X';
        ++i;
    }
    cout << s << endl;

    s = "Hello World!";
    for(decltype(s.size()) i =0;
        i < s.size(); ++i){
        s[i] = 'X';
    }
    cout << s << endl;

    s = "Hello World!";
    for(char &c : s){
        c = 'X';
    }
    cout << s << endl;

    return 0;
}

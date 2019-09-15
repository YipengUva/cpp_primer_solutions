#include <iostream>
#include <string>
//#include "chapter6.h"

using namespace std;

bool string_capital(const string & s)
{
    bool cap_state = false;
    for(auto &s_ch : s){
        if(isupper(s_ch))
            cap_state = true;
    }
    return cap_state;
}

void string2lower(string &s)
{
    for(auto &s_ch : s){
        s_ch = tolower(s_ch);
    }
}

int main(){
    cout << string_capital("Yipeng Song") << endl;
    cout << string_capital("yipeng song") << endl;

    string s = "Yipeng Song";
    string2lower(s);
    cout << s << endl;

    return 0;
}

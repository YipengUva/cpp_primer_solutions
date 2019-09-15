#include <iostream>

using namespace std;

int main()
{
    cout << "Enter a string: ";
    string s;
    getline(cin, s);

    string new_s;
    for(auto &c : s){
        if(!ispunct(c)){
            new_s += c;
        }
    }
    cout << "string after removing punctuation: "
         << new_s << endl;

    return 0;
}

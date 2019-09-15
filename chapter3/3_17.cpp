#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<string> vec_str;
    string word;
    while(cin >> word){
        vec_str.push_back(word);
    }
    for(auto &s : vec_str){
        for(auto &c : s){
            c = toupper(c);
            cout << c ;
        }
        cout << endl;
    }

    return 0;
}

#include <iostream>
#include <vector>

using namespace std;

void print_v(vector<int> &v){
    if(v.empty()){
        cout << "Empty vector" << endl;
    }else{
        cout << "size of v is: " << v.size() << endl;
        for(auto &c : v){
            cout << c << endl;
        }
    }
}

void print_v(vector<string> &v){
    if(v.empty()){
        cout << "Empty vector" << endl;
    }else{
        cout << "size of v is: " << v.size() << endl;
        for(auto &c : v){
            cout << c << endl;
        }
    }
}

int main()
{

    vector<int> v1;
    print_v(v1);

    vector<int> v2(10);
    print_v(v2);

    vector<int> v3(10, 42);
    print_v(v3);

    vector<int> v4{10};
    print_v(v4);

    vector<int> v5{10, 42};
    print_v(v5);

    vector<string> v6{10};
    print_v(v6);

    vector<string> v7{10, "hi"};
    print_v(v7);

    return 0;
}

#include <iostream>
#include <vector>
#include <string>

using namespace std;

void print(const vector<int> ivec);

int main()
{
    vector<int> ivec;
    print(ivec);

    vector<int> ivec1(10, 3);
    print(ivec1);

    vector<int> ivec2 = ivec1;
    print(ivec2);

    vector<int> ivec3 = {1, 2, 3};
    print(ivec3);

    vector<int> ivec4;
    for(int i = 1; i<=100; ++i){
        ivec4.push_back(i);
    }
    print(ivec4);

    return 0;
}

void print(const vector<int> ivec)
{
    for(auto &ele : ivec){
        cout << ele;
    }
    cout << endl;
}

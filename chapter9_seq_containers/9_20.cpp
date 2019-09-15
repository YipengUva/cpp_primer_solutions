#include <iostream>
#include <list>
#include <deque>
#include <vector>
#include <array>

using namespace std;

int main()
{
    list<int> lvec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    deque<int> dvec;

    for(auto &ele : lvec){
        if(ele % 2 == 0){
            dvec.push_front(ele);
        }else{
            dvec.push_back(ele);
        }
    }

    for(auto &ele : dvec){
        cout << ele << ' ';
    }

    return 0;
}

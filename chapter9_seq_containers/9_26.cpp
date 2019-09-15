#include <iostream>
#include <list>
#include <deque>
#include <vector>
#include <array>

using namespace std;

int main()
{
    int ia[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89 };
    vector<int> iv;
    list<int> ils;

    auto ia_beg = begin(ia);
    auto ia_end = end(ia);

    while(ia_beg != ia_end){
        iv.push_back(*ia_beg);
        ils.insert(ils.end(), *ia_beg);
        ++ia_beg;
    }

    auto ils_beg = ils.begin();
    auto ils_end = ils.end();
    while(ils_beg != ils_end){
        if(*ils_beg % 2 != 0)
            ils_beg = ils.erase(ils_beg);
        else
            ++ils_beg;
    }

    auto beg = iv.begin();
    while(beg != iv.end()){
        if(*beg % 2 == 0)
            beg = iv.erase(beg);
         else
            ++beg;
    }

    return 0;
}

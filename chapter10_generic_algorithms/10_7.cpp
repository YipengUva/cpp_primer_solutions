#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <list>
#include <iterator>

using namespace std;

int main()
{
   vector<int> vec;
   list<int> lst;
   int i;
   while (cin >> i)
      lst.push_back(i);

   copy(lst.cbegin(), lst.cend(), back_inserter(vec));

   for(auto &ele : vec){
       cout << ele << " ";
   }

   vector<int> vec2;
   vec2.reserve(15);
   fill_n(back_inserter(vec2), 10, 0);

   for(auto &ele : vec2){
       cout << ele << " ";
   }

    return 0;
}

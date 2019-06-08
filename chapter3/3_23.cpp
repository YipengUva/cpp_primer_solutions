#include <iostream>
#include <vector>

using namespace std;

int main()
{
   vector<int> ivec(10,10);

   for(auto it = ivec.begin();
       it != ivec.end(); ++it){
       *it += *it;
       cout << *it << endl;
    }

    return 0;
}

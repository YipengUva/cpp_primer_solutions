#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> ivec;
    int tmp;
    while(cin>>tmp){
        ivec.push_back(tmp);
    }

    for(int i = 0; i < (ivec.size()/2); ++i){
        //int i_rev = (ivec.size() - i - 1);
        cout << ivec[i] + ivec[(ivec.size() - i - 1)] << endl;
    }

    return 0;
}

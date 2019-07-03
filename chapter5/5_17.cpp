#include <iostream>
#include <vector>
#include <assert.h>
#include <string>

using namespace std;

int main(){
    vector<int> vec1 = {0, 1, 1, 2, 3, 5, 8};
    vector<int> vec2 = {0, 1, 1, 2};

    int n1 = vec1.size();
    int n2 = vec2.size();

    int n = (n1 < n2) ? n1 : n2;

    bool pre_fix = true;
    for(int i = 0; i < n; ++i){
        if(vec1[i] == vec2[i])
            pre_fix =  true && pre_fix;
        else
            pre_fix =  false;
    }

    std::cout << pre_fix << endl;

    return 0;

}

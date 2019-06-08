#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> ivec_1;
    for(int i=0; i<10; ++i){
        ivec_1.push_back(42);
    }

    vector<int> ivec_2(10,42);

    vector<int> ivec_3 = {42, 42, 42, 42, 42,
                          42, 42, 42, 42, 42};

    return 0;
}

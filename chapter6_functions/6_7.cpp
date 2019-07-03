#include <iostream>

using namespace std;

int data_generate(){
    static int out = 0;

    return out++;
}

int main(){
    int num = 10;

    for(int i = 0; i != num; ++i){
        cout << i << " th call: " << data_generate() << endl;
    }

    return 0;
}

#include <iostream>
#include <vector>
#include <assert.h>
#include <string>

using namespace std;

int main(){
    unsigned aCnt = 0, eCnt = 0, iouCnt = 0;
    char ch;

    while(cin >> ch){
        switch (ch) {
        case 'a': aCnt++; break;
        case 'e': eCnt++; break;
        default: iouCnt++; break;
        }
    }

    std::cout << "a occurres " << aCnt << endl;
    std::cout << "e occurres " << eCnt << endl;
    std::cout << "i o u occurres " << iouCnt << endl;



    return 0;
}

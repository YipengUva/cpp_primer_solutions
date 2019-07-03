#include <iostream>
#include <vector>
#include <assert.h>
#include <string>

using namespace std;

int main(){
    int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, otherCnt = 0;
    char ch;

    while(cin >> ch){
        ch = std::tolower(ch);

        if(ch == 'a')
            ++aCnt;
        else if(ch == 'e')
            ++eCnt;
        else if(ch == 'i')
            ++iCnt;
        else if(ch == 'o')
            ++oCnt;
        else if(ch == 'u')
            ++uCnt;
        else
            ++otherCnt;
    }

    return 0;

}

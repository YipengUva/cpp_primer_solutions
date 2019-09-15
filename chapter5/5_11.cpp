#include <iostream>
#include <vector>
#include <assert.h>
#include <string>

using namespace std;

int main(){
    int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, otherCnt = 0;
    int blanckCnt = 0, tabCnt = 0, newlineCnt = 0;
    char ch;

    while(std::cin.get(ch)){
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
        else if(ch == ' ')
            ++blanckCnt;
        else if(ch == '\t')
            ++tabCnt;
        else if(ch == '\n')
            ++newlineCnt;
        else
            ++otherCnt;
    }

    return 0;

}

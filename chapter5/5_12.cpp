#include <iostream>
#include <vector>
#include <assert.h>
#include <string>

using namespace std;

int main(){
    int ffCnt = 0, flCnt = 0, fiCnt = 0;
    bool f_state = false;
    char ch;

    while(std::cin.get(ch)){
         if(f_state){
            switch(ch){
            case 'f':
                ++ffCnt;
                break;
            case 'l':
                ++flCnt;
                break;
            case 'i':
                ++fiCnt;
                break;
            }
        }

        if (ch == 'f')
            f_state = true;
        else
            f_state = false;

    }

    std::cout << "ff occurrences " << ffCnt << " times \n";
    std::cout << "fl occurrences " << flCnt << " times \n";
    std::cout << "fi occurrences " << fiCnt << " times \n";

    return 0;

}

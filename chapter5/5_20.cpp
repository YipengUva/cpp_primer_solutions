#include <iostream>
#include <vector>
#include <assert.h>
#include <string>

using namespace std;

int main(){
    string word, pre_word;
    int wordCnt = 1;

    while(cin >> word){
        if (word == pre_word){
            ++wordCnt;
        }else{
            wordCnt = 1;
        }

        if (wordCnt > 1 )
            break;

        pre_word = word;
    }

    if(wordCnt > 1){
        cout << word << " occurs " << wordCnt << " times \n";
    }else{
        cout << "no word was repeated. \n";
    }

    return 0;

}

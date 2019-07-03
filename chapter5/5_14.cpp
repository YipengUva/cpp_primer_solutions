#include <iostream>
#include <vector>
#include <assert.h>
#include <string>

using namespace std;

int main(){
    string word, pre_word;
    int Cnt_word = 0;

    string word_track;
    int Cnt_track = 1;

    while(cin >> word){
        if(word == pre_word){
            ++Cnt_word;
        }else{
            Cnt_word = 1;
        }

        if(Cnt_word > Cnt_track){
            word_track = word;
            Cnt_track = Cnt_word;
        }

        pre_word = word;
    }

    if(Cnt_track > 1){
        std::cout << "the word " << word_track << " occurred " << Cnt_track << " times.";
    }else{
        std::cout << "no word was repeated";
    }

    return 0;

}

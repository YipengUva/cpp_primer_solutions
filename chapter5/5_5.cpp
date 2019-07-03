#include <iostream>
#include <vector>
#include <assert.h>

using namespace std;

int main()
{
    cout << "Input a integer grade: ";
    int grade;
    cin >> grade;
    assert(grade>=0 && grade <=100);

    string lettergrade = "F";
    if(grade==100){
        lettergrade = "A++";
    }else if(grade>=90){
        lettergrade = "A";
    }else if(grade>=80){
        lettergrade = "B";
    }else if(grade>=70){
        lettergrade = "C";
    }else if(grade>=60){
        lettergrade = "D";
    }

    if (grade % 10 > 7){
        lettergrade += '+';
    }else if(grade % 10 <3 && grade != 100){
        lettergrade += '-';
    }

    cout << lettergrade << endl;

    return 0;
}

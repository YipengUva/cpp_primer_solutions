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

    vector<string> scores = {"F", "D", "C", "B", "A", "A++"};
    string lettergrade;

    lettergrade = (grade < 60) ? scores[0]
                               : scores[(grade-50)/10];

    lettergrade += (grade % 10 > 7) ? '+'
                                    : ((grade % 10 <3 && grade != 100) ? '-': ' ');


    cout << lettergrade << endl;

    return 0;
}

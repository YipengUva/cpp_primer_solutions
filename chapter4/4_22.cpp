#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

string grad_if(int grade){
    if(grade > 90){
        return "high pass";
    }else if(grade > 75){
        return "pass";
    }else if(grade > 60){
        return "low pass";
    }else{
        return "fall";
    }
}

string grad_condition(int grade){
    string tmp;
    tmp = (grade>90) ? "high pass"
                     : ((grade>75) ? "pass"
                                   : ((grade>60) ? "low pass" : "fall"));
    return tmp;
}


int main()
{
    int grade = 91;
    cout << "grade = " << grade << endl;
    cout << grad_if(grade) << endl;
    cout << grad_condition(grade) << endl;

    grade = 80;
    cout << "grade = " << grade << endl;
    cout << grad_if(grade) << endl;
    cout << grad_condition(grade) << endl;

    grade = 61;
    cout << "grade = " << grade << endl;
    cout << grad_if(grade) << endl;
    cout << grad_condition(grade) << endl;

    grade = 59;
    cout << "grade = " << grade << endl;
    cout << grad_if(grade) << endl;
    cout << grad_condition(grade) << endl;


    return 0;
}

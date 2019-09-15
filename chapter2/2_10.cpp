#include <iostream>
#include <string>
#include "Sales_item.h"

using namespace std;

string global_str;
int global_int;

int main()
{
    int local_int;
    string local_str;

    cout << global_str << " " << local_str << endl;
    cout << global_int << " " << local_int << endl;

    return 0;
}

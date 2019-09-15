#include <iostream>
#include <fstream>
#include <list>
#include <forward_list>
#include <deque>
#include <vector>
#include <array>

using namespace std;

void print(list<string> lst_strs){
    for (auto ele : lst_strs){
        cout << ele;
    }
    cout << endl;
}

void print(forward_list<string> lst_strs){
    for (auto ele : lst_strs){
        cout << ele;
    }
    cout << endl;
}


int main()
{
    vector<int> vec1;

    // add 16 elements
    for(int i=1; i <= 16; ++i){
        vec1.push_back(i);
    }
    cout << "size: " << vec1.size() << " ;"
         << " capacity: " << vec1.capacity() << endl;

    // add one more element
    vec1.push_back(11);
    cout << "size: " << vec1.size() << " ;"
         << " capacity: " << vec1.capacity() << endl;





    /*
    list<string> lst1 = {"1", "2", "3", "5"};
    list<string> lst2 = {"3", "1", "10", "2"};
    swap(lst1, lst2);
    print(lst1);
    print(lst2);
    */




    /*
    vector<string> vec_int;
    string tmp;
    ifstream file("IntegerArray.txt");

    while ( getline(file, tmp) ){
        vec_int.push_back(tmp);
        cout << tmp << endl;
    }
    */

    return 0;
}

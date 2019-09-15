#include <iostream>

using namespace std;

int main()
{
   cout << "Enter a series number of values and using \\n indicates the end: ";
   int sum = 0, value = 0;
   while(cin >> value){
      sum += value;
   }

   cout << "Sum is: " << sum << endl;

   return 0;
}

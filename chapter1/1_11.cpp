#include <iostream>

using namespace std;

int main()
{
  cout << "Enter two integers: ";
  int val_1{0}, val_2{0};
  cin >> val_1 >> val_2;

  if(val_1 < val_2){
    int tmp = val_2;
    val_2 = val_1;
    val_1 = tmp;
  }

  while(val_2 <= val_1){
    cout << val_2 << endl;
    ++val_2;
  }

   return 0;
}

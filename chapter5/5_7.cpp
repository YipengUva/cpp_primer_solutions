#include <iostream>
#include <vector>
#include <assert.h>

using namespace std;

int main()
{
   int ivar1 = 10, ivar2 = 10;
   if(ivar1 != ivar2){
        ivar1 = ivar2;
   }else{
       ivar1 = ivar2 = 0;
   }

   cout << ivar1 << " " << ivar2 << endl;

   int minval = 5;
   int occurs = 0;
   if(ivar1 < minval){
       minval = ivar1;
       occurs = 1;
   }

   return 0;
}

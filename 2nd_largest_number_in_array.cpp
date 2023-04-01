
#include <iostream>
using namespace std;
int main() {
   
   int array[10] = {1,2,3,4,5,2,7,8,9,-1};
   int largest = array[0];
   int largest_2nd=array[0];
   
   
   for( int a=1;a<10;a++)
   {
       
       if(array[a]>largest)
       {
           largest_2nd= largest;
           largest=array[a];
       }
   }


   cout<<"2nd largest is "<< largest_2nd;
    return 0;
}

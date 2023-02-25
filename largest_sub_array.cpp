
#include <iostream>
#include<string.h>
using namespace std;

int main() {

    int left =0;// to track the left index of largest sub array
    int end =0;
    int size =5; // size of main array
    int array[5]= { 2,1,1,-7,-3};
    
    int larget =0; 
    
     int * temp_array;
     int i=0;
     int sum ;
    for(int k =0 ; k<size-1 ;k++)
    {
          temp_array = new int [size-k];// dynamic allocation of array and in every interation it will be -1 then before 
          temp_array[0]= array[k];
          
           i=1;
            sum=temp_array[0];
          for(int j=k+1 ; j< size;j++ )
          {
                     sum =sum+array[j];
                     temp_array[i]=sum;
                     i++;
              
          }
        
          for(int l=0;l<size-k ;l++)
          {
            if(temp_array[l]>larget)
            {
                larget = temp_array[l];
                left= k ;
                end = k+l; 
            }
          }
         
          delete[] temp_array; // to free up memory 
          
    }
    cout<<endl<<"Left is "<<left <<  "   End is "<<end<<endl;
    for(int k=left ;k<=end;k++)
    {
        cout<<array[k]<<" ";
    }
    cout<< "\n Sum is : "<<larget;

        return 0;
}
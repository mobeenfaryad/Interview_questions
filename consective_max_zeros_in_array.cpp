
#include <iostream>
using namespace std;

int main() {

char a [100];
cout<<"\n Enter String : ";
cin>>a;
int temp=0;
int max=0;
int t =0;
for(int k=0;a[k]!='\0';k++)//iterate through string 
{
    
    if(a[k]=='0')
    {
        temp++;
        for(int j =k+1 ;a[j]!='\0';j++)
        {
            if(a[j]=='0')
            {
                temp++;
            }
            else {
                break;
            }
            
             t=j;
            }
            
            k=k+t;
            t=0;
            if(temp>max )
            {
                max =temp;
            }
            
            temp=0;
    
        }
        
        
    }

cout<<endl<<max;


    return 0;
}
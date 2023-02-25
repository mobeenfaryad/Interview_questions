// Online Java Compiler
// Use this editor to write, compile and run your Java code online

class HelloWorld {
    public static void main(String[] args) {
  
        

  // Input type: string str = "1.25";
    // Output type: string str = "125/100 = 5/4";



double a = 1.25 ;

int size =0;
double temp=0.1;
int t =(int)a;
while (a>temp)
{
    a  =a*10;
    t=(int)a;
    temp=(double)t ; 
    size++;
}


//cout<<size;

int j =1;
for(int k=0;k<size ;k++)
{
    j=j*10;
}
int l = (int )a;

System.out.println(l);
System.out.println("/ ");
System.out.println( j);
}
}

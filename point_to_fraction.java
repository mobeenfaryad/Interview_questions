
class HelloWorld {
    public static void main(String[] args) {

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

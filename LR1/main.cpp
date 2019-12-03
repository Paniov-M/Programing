#include <iostream>
#include <math.h>
using namespace std;
int main() 
{
float g,x,z,a;
cout<<"a=";
cin>>a;
x=21.4*pow((a-0.5),2)-cos(M_PI/a);
z=pow((x+6.1),3/5);
g=exp(-3.5/fabs(z))+log(pow(z,4));
cout<<"x="<<x<<"\n g="<<g<<"\n z="<<z<<endl;
system("pause");
return(0);
}

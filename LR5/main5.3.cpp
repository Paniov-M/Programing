#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	float x1,x2,x3,x4,x5,x6,x7,n,g,dx,s;
	cout<<"Vvedit n=";
	cin>>n;
	cout<<"Vvedit x1=";
	cin>>x1;
	cout<<"Vvedit krok zminu dx=";
	cin>>dx;
	s=0;
		x2=0.5*x1+dx;
        x3=0.5*x2+dx;
        x4=0.5*x3+dx;
        x5=0.5*x4+dx;    
	for(float n;n<=25;n++)
	{
		x6=0.5*x5+dx;
        x7=0.5*x6+dx;
		g=(pow(x7,2)-pow(x5,2))/(2*x6+1);
		x5=x6;
		x6=x7;
		s=s+g;
	}
	cout<<"Summa s ="<<s<<endl; 
	system("pause");
	return(0);
}

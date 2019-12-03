#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	double n,x,y,xp,xk,dx;
	cout<<"Vedit poshatkove xp :";
	cin>>xp;
	cout<<"Vedit krok zminu dx :";
	cin>>dx;
	cout<<"Vedit kinzeve n:";
	cin>>n;
	x=xp;
	for(double i=1;i<=n;i++)
	{
		y=(pow(x,2)+2*x)/(cos(5*x)+2);
		cout<<"x="<<x<<"\ty="<<y<<endl;
		x=x+dx;
	system("pause");
	}
	return(0);
}

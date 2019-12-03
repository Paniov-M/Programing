#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	float x,y,xp,xk,dx;
	cout<<"Vedit poshatkove xp :";
	cin>>xp;
	cout<<"Vedit kinzeve xk :";
	cin>>xk;
	cout<<"Vedit krok zminu dx :";
	cin>>dx;
	x=xp;
	while(x<=xk)
	{
		y=(pow(x,2)+2*x)/(cos(5*x)+2);
		cout<<"x="<<x<<"\ty="<<y<<endl;
		x=x+dx;
	system("pause");
	}
	return(0);
}

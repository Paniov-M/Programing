#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	float eps,x,x0,x1,a,b,y,yb,ya;
	int n=0;
	//n-кількість ітерацій 
	cout<<"Vvedit tochnist znachen eps = ";
	cin>>eps;
	cout<<"Vvedit promizku znachen argumenta : "<<endl;
	cout<<"a=";
	cin>>a;
	cout<<"b=";
	cin>>b;
    ya=cos(a)+1/(a+2);
    yb=cos(b)+1/(a+2);
    x1=(a*yb-b*ya)/(yb-ya);
    y=cos(x1)+1/(x1+2);
    if(ya*y>0)
    x=a;
    else if(yb*y>0)
    x=b;
    while(fabs(x1-x)>eps)
	{
	    x=x1;
    	x1=cos(x)+1/(x+2);
    	n++;
	}
	cout<<"Znachenna korena y="<<x1<<endl<<"Kilkist iteraziy n="<<n<<endl;
	system("pause");
	return(0);	
 }

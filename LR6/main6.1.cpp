#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	float x,n,eps,y,y1;
	cout<<"Vvedit znachenna x= ";
	cin>>x;
	cout<<"Vvedit stepin n= ";
	cin>>n;
	cout<<"Vvedit tochnist eps= ";
	cin>>eps;
	y1=x;
	while(fabs(y1-y)>eps)
	{
		y=y1;
		y1=(1/n)*(x/pow(y,n-1)+(n-1)*y);
	}
	cout<<"Znachenna korena = "<<y1<<endl;
	system("pause");
	return(0);                                                                                   
}

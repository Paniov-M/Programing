#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	float l,k,u,p;
	p=1;
	cout<<"Input k=";
	cin>>k;
	cout<<"Input l=";
	cin>>l;
	for ( float i=k;i<=l;i++)
	{
	u=(pow((k+1),2))/(2*pow(i,3)+3*i+1);
	p=p*u;
	}
	cout<<"dobutok p="<<p<<endl;
	system("pause");
	return(0);
}

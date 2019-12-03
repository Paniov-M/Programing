#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	float a,b,p;
	cout<<"Pochatkove a=";
	cin>>a;
	cout<<"Kinzeve b=";
	cin>>b;
	p=1;
	for( int i=a;i<=b;i++)
	{
	p=p*i;
    } 
	cout<<"Dobutok p ="<<p<<endl;
	system("pause");
	return(0);	
}

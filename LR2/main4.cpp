#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	float a,b,c,l,k;
	cout<<"l=";
	cin>>l;
	cout<<"k=";
	cin>>k;
	a=(l-2*k)/l;
	b=(l+k)/5;
	c=l*k-3.5;
	if(a>=-5&&a<=8)cout<<"a="<<a;
    if(b>=-5&&b<=8)cout<<"\nb="<<b;
    if(c>=-5&&c<=8)cout<<"\nc="<<c<<endl; 
	system("pause");
	return(0);
}

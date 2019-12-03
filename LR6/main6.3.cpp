#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	float x,yn,s,eps,pn;
	int n;
	cout<<"Vvedit tochnist eps =";
	cin>>eps;
	cout<<"Vvedit znachena x =";
	cin>>x;
	n=0;
	yn=1;
	s=1;
	while(fabs(yn)>eps)
	{
		pn=(pow(x,2)*(2*n-3))/(2*n-1);
		yn=yn*pn;
		s=s+yn;
		n++;
	}
	cout<<"Obchuslene znachenna funkzii s="<<s<<"\nKilkist iteraziy n ="<<n<<endl;
	system("pause");
	return(0);
}

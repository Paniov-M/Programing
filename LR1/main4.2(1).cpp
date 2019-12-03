 #include <iostream>
#include <math.h>
using namespace std;
int main()
{
	float y,t,t1,t2,t3,dx;
	cout<<"Vedit t1=";
	cin>>t1;
	cout<<"Vedit t2=";
	cin>>t2;
	cout<<"Vedit t3=";
	cin>>t3;
	cout<<"Vedit krok zminu dx=";
	cin>>dx;
	t=t1;
	while(t<=t3)
	{
		if(t<t2)
		y=pow(t,2)-sin(t);
		else
		y=sin(t)-pow(t,2);
		cout<<"t="<<t<<"\ty="<<y<<endl;
		t=t+dx;
	}
	return(0);
}

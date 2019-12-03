#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	float x,y,g;
	cout<<"x=";
	cin>>x;
	cout<<"y=";
	cin>>y;
	if(fabs(x)>=1&&fabs(y)<=1)g=M_PI/8*pow(sin((x-y)/3),2);
	else if(y>1&&x<1)g=pow(y,-exp(1));
	else if(fabs(x)<1&&fabs(y)<=1)g=exp(-x);
	else if(y<-1&&x>1)g=0.15;
	cout<<"g="<<g<<endl;
	system("pause");
	return(0);
}

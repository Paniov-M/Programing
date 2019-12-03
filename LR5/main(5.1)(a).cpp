#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	float n,u,s;
	s=0;
	cout<<"Input n=";
	cin>>n;
	for(float i=n;i<=30;i++)
	{
		u=pow((-1),i-1)*(pow(i,2)-2)/(3*i+1);		
		s=s+u;
	}
	cout<<"suma="<<s<<endl;
	system("pause");
	return(0);
}

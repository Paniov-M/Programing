#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	float y,t1,dx;
	cout<<"Vedit t1=";
	cin>>t1;
	cout<<"Vedit krok zminu dx=";
	cin>>dx;
if((t1>=-3.14)&&(t1<0))
{
	for(t1;t1<0;t1+=dx)
	{
		y=pow(t1,2)-sin(t1);
		cout<<"t1="<<t1<<"\ty="<<y<<endl;
	     }
	}
		if((t1>=0)&&(t1<=3.14))
		{
	for(t1;t1<=3.14;t1+=dx)
	{
		y=sin(t1)-pow(t1,2);
		cout<<"t1="<<t1<<"\ty="<<y<<endl;
		t1=t1+dx;
	    }
	    
}
    system("pause");
	return(0);
	

}

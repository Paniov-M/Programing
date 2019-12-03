#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	float x,y,z,x1,y1,dx,dy;
	cout<<"Vedit poshatkove x1=";
	cin>>x1;
	cout<<"Vedit poshatkove y1=";
	cin>>y1;;
	cout<<"Vedit krok zminu dx=";
	cin>>dx;
	cout<<"Vedit krok zminu dy=";
	cin>>dy;
    for(float x=x1;x<=2;x+=dx)
    for(float y=y1;y<=1;y+=dy)
    {
	z=1/tan(8*x-3)-5*cos(y);
	cout<<"\nz="<<z<<"\ny="<<y<<"\nx="<<x<<endl;
    }
	return(0) ;	
}
	

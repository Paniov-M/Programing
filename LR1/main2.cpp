#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	double A,B,C,kytA,kytB,kytC;
	cout<<"A=";
	cin>>A;
	cout<<"B=";
	cin>>B;
	cout<<"C=";
	cin>>C;
	kytA=(180/3.14)*acos((pow(A,2)+pow(C,2)-pow(B,2))/(2*A*C));
	kytB=(180/3.14)*acos((pow(A,2)+pow(B,2)-pow(C,2))/(2*A*B));
	kytC=(180/3.14)*acos((pow(C,2)+pow(B,2)-pow(A,2))/(2*B*C));
	cout<<"kytA="<<kytA<<"\nkytB="<<kytB<<"\nkytC="<<kytC<<endl;
	system("pause");
	return(0);
}

	

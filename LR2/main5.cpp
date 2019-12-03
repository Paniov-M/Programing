#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	float x,y;
	cout<<"x=";
	cin>>x;
	cout<<"y=";
	cin>>y;
	if((pow((x-4),2)+pow(y,2))<16&&x<2)cout<<"t M nalezut sektoru"<<endl;
	else cout<<"t M ne nalezut sektoru"<<endl;
	system ("pause");
	return(0);
}

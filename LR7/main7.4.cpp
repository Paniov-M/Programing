#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	const int N=5;                                              //вводимо кількість працівників ,тобто наприклад N=5;
	float Zo;
	float Z[N];
	cout<<"Ceredna zarobitna plata Zo=";                        //вводимо середню заробітну плату;
	cin>>Zo;
	for (int i=0;i<N;i++)
	{
		cout<<"Z["<<i<<"]=";                                   //вводимо елементи масива(зарплату кожного працівника);
		cin>>Z[i];
	}
	cout<<endl;
	for (int i=0;i<N;i++)
	{
		if(Z[i]>Zo)                                           //перевіряємо умову,має бути зарплата більша за середній показник;
		{
			cout<<"Z[i]="<<Z[i]<<"\tnumber i="<<i<<endl;      //виводимо номер і зарплату працівника;
		}
	}
	system("pause");
	return(0);
}

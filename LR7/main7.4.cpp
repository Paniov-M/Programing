#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	const int N=5;                                              //������� ������� ���������� ,����� ��������� N=5;
	float Zo;
	float Z[N];
	cout<<"Ceredna zarobitna plata Zo=";                        //������� ������� �������� �����;
	cin>>Zo;
	for (int i=0;i<N;i++)
	{
		cout<<"Z["<<i<<"]=";                                   //������� �������� ������(�������� ������� ����������);
		cin>>Z[i];
	}
	cout<<endl;
	for (int i=0;i<N;i++)
	{
		if(Z[i]>Zo)                                           //���������� �����,�� ���� �������� ����� �� ������� ��������;
		{
			cout<<"Z[i]="<<Z[i]<<"\tnumber i="<<i<<endl;      //�������� ����� � �������� ����������;
		}
	}
	system("pause");
	return(0);
}

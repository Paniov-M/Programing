3#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int i,indmax;
	float C[6]={2.3,7.9,12.3,-6.8,-22.3,0};  // ������ �����
	float max = C[0];                       // �������� ��������,�� ����������� �������� �� ������ ������� ������
	for(i=0;i<6;i++)                        //������ ����
	{
		if(C[i]>max)                       //���������� �������� ������� ��������,���� �������� ����� �� �����������(max)- ��� max ���������� ��������� ���� ��������.
		{
			max = C[i];
		    indmax=i+1;
		}
	}
	cout<<"max = "<<max<<endl;
	cout<<"number i = "<<indmax<<endl;
	system("pause");
	return(0);
}

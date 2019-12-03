3#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int i,indmax;
	float C[6]={2.3,7.9,12.3,-6.8,-22.3,0};  // задали масив
	float max = C[0];                       // присвоїли значення,що максимальне значення це перший елемент масиву
	for(i=0;i<6;i++)                        //робимо цикл
	{
		if(C[i]>max)                       //перевіряємо значення кожного елемента,якщо значення більше за максимальне(max)- тоді max присвоюємо значенння того елемента.
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

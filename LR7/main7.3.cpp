#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    const int n=10;
    int kn=0;                        //кількість нульових елементів=0;
    int A[n];
	for (int i=0;i<10;i++)
	{
	cout<<"A["<<i<<"]=";             //вводимо елементи масива;
	cin>>A[i];
    }  
	for (int i=0;i<10;i++)
	{
     if(A[i]==0)                    //перевіряємо чи елемент дорівнює 0 ,якщо так то kn++;
		{
		  kn++;
		}
	}
    cout<<"kn ="<<kn<<endl;
    system("pause");
    return(0);
}

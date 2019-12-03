#include <iostream>
#include <math.h>
using namespace std;
int main()
{
 const int m = 3;
 const int n = 3;
 int min,indm,indn;
 int A[m][n] = { {1,2,3}, {4,-5,6}, {7,8,-9}};
 for(int i=0; i < m; i++)
 {
  for(int j = 0; j < n; j++)
  {
    cout<<"A["<<i<<"]["<<j<<"]=";
    cin>>A[i][j];
  }
 cout<<endl;
  }  
 for(int i=0; i < m; i++)
 {
   min=A[i][0];
   indm = i;
   indn = 0;
  for(int j = 0; j < n; j++)
  {
    if(A[i][j]<min)
    {
     min=A[i][j];
     indm=i;
     indn=j;
    }
  }
  cout<<"min= "<<min<<endl;
  cout<<"number m= "<<indm<<"\tnumber n= "<<indn<<endl;
}
 system("pause");
 return(0);
}

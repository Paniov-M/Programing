#include <iostream>
#include <math.h>
using namespace std;
int main()
 {
 const int m=3;
 const int n=4;
 float A[m][n]= { {1,2,3,-1}, {4,1,6,-2}, {7,8,-4,1} };
 for(int i=0; i<m; i++)
 {
  for(int j=0; j<n; j++) 
   cout<<A[i][j]<<"\t";
  cout<<endl;
 }
 cout<<endl;
 for(int i=0; i<m; i++)
  if(i==m-1 || i ==m-2)
  {
   for(int j=0; j<n; j++)
   {
    float max=A[i][j];
    int indexMax = j;
    for(int k=j; k<n; k++)
     if(A[i][k]>max)
     {
      max=A[j][k];
      indexMax=k;
     }
    swap(A[i][j], A[i][indexMax]);
   }
  }
 
  for(int i=0; i<m; i++)
 {
  for(int j=0; j<n; j++) 
   cout<<A[i][j]<<"\t";
  cout<<endl;
 }
 return(0);
}

/*Напишите программу, которая удаляет из массива все простые числа встречающиеся больше одного раза.*/
#include <iostream>
using namespace std;
bool prostoe (int a){
for (int i=2;i*i<=a;i++){
if (a%i==0 && a!=2)
    return false;
}
return true;
}

int main()
{
   int n;
   cin>>n;
   int *A=new int[n];
   int *B=new int[n];
   for (int k=0;k<n;k++){
    B[k]=0;
    }
   for (int i=0;i<n;i++)
    cin>>A[i];
   for (int i=0;i<n;i++){
    if (!prostoe(A[i])||A[i]==1)
    continue;
    if(i<=n-2){
    for ( int j=i+1;j<n;j++){
    if (A[i]==A[j]){
        B[i]=1;
        B[j]=1;
    }
    }
    }
   }
   for (int i=0; i<n;i++){
   if (B[i]==0){
 cout<<A[i]<<" ";
   }
   }
delete []A;
delete []B;
    return 0;
}

/*Создайте рекурсивную функцию, подсчитывающую сумму элементов массива по следующему алгоритму:
массив делится пополам, подсчитываются и складываются суммы элементов в каждой половине.
Сумма элементов в половине массива подсчитывается по тому же алгоритму, то есть снова путем деления пополам.
Деления происходят, пока в получившихся кусках массива не окажется по одному элементу и вычисление суммы, соответственно, не станет тривиальным.*/
#include <iostream>
using namespace std;
void strange_sum(int *A,int n){
for(int i=0;i<n;i++)
    cin>>A[i];
}
int sum(int *A,int n) {
if(n==1) return A[0];
else {
int *B=new int[n/2];
for(int i=0;i<n/2;i++)
B[i] = A[i];
int *C=new int[n-n/2];
for(int i=0;i<n-n/2;i++)
C[i] = A[i+n/2];
return sum(B,n/2) + sum(C,n-n/2);
delete []B;
delete []C;
}
}
int main()
{
int n;
cin>>n;
int *A=new int[n];
strange_sum(A,n);
cout<< sum(A,n);
delete []A;
return 0;
}

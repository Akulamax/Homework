/*Напишите эффективную функцию находящую k-ую порядковую статистику в массиве.
Программа должна состоять из этой функции и примера её использования в main.*/
#include <iostream>
using namespace std;
void Qsort(int*A, int m, int n){
int l=m,r=n,piv=A[(l+r)/2];
while (l<=r) {
while (A[l]<piv)
l++;
while (A[r]>piv)
r--;
if (l<=r){
swap (A[l],A[r]);
l++;
r--;
}
}
if (m<r)
Qsort (A,m,r);
if (l<n)
Qsort (A,l,n);
}
int main(){
int n,k;
cout<<"Enter n: ";
cin>>n;
int *A=new int[n];
for (int i=0;i<n;i++){
cin>>A[i];
}
cout<<"Enter k: ";
cin>>k;
Qsort(A,0,n-1);
cout<<A[k-1];
return 0;
}

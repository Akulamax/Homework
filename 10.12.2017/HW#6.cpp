/*Напишите программу выводящую все несократимые дроби с неотрицательными знаменателем и числителем не превышающим N,
в порядке возрастания. Будем считать дробь 1/0 - максимальной несократимой.*/
#include <iostream>
using namespace std;
void Farey_sequence1(int n,bool asc){
int a=1,b=n,c=1,d=n-1,tempa,tempb,k;
while ((asc)&&(c<=n)) {
cout<<a<<'/'<<b<<" ";
k=(n+b)/d;
tempa=a; tempb=b; a=c; b=d; c=k*c-tempa; d=k*d-tempb;
}
}
void Farey_sequence2(int n,bool asc){
int a=n-1,b=n,c=n-2,d=n-1,tempa,tempb,k;
while ((!asc)&&(a>0)) {
cout<<b<<'/'<<a<<" ";
k=(n+b)/d;
tempa=a; tempb=b; a=c; b=d; c=k*c-tempa; d=k*d-tempb;
}
}
int main(){
int n;
cin>>n;
if (n==0)
cout<<0;
if (n==1){
cout<<0<<'/'<<1<<" ";
cout<<1<<'/'<<1<<" ";
cout<<1<<'/'<<0<<" ";
}
if (n!=0 && n!=1){
cout<<0<<'/'<<1<<" ";
Farey_sequence1(n,1);
cout<<1<<'/'<<1<<" ";
Farey_sequence2(n,0);
cout<<1<<'/'<<0<<" ";
}
return 0;
}

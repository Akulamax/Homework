/*Напишите программу, которая выводит все натуральные числа-палиндромы длины n, делящиеся на 9, в порядке возрастания.*/
#include <iostream>
#include <cmath>
using namespace std;
void print_palindrom(int n){
    int num,temp;
    int a=pow(10,n)+1;
    int b=pow(10,n-1)+1;
    for(int i=b;i<a;i++){
        temp=i;
        num=0;
        while(temp!=0)
        {
         num=num*10+(temp%10);
         temp/=10;
        }
 if(num==i && i%9==0)
cout<<i<<endl;
    }
}
int main()
{
int n;
cin>>n;
print_palindrom(n);
    return 0;
}

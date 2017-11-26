/*Задано число n. Требуется найти число от 1 до n, включительно, которое имеет максимальное число положительных целых делителей.
Если есть несколько чисел от 1 до n с максимальным числом делителей, выведите любое из них.*/
#include <iostream>
using namespace std;
int main()
{
int b,num=0,div=0;
cin>>b;
    for (int i=1;i<=b;i++)
    {
        int a=0;
        for (int j=1;j<=i;j++)
            if (i%j==0)
                a++;
        if (a>div){
        div=a;
        num=i;
        }
    }
   cout<<"Number is "<<num<<endl<<"Number of dividers "<<div;
       return 0;
}

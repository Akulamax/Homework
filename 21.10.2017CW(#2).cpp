/*Напишите программу, выписывающую среднее арифметическое всех введенных нечетных чисел. */
#include <iostream>
using namespace std;
int main()
{
    int s=0,n=0,a;
    do
    {
        cin >>a;
        if (a%2!=0)
        {
            s=s+a;
            n=n+1;
        }
    }
    while (a!=0);
    double d;
    d=s/n;
    cout <<"result " << d;
    return 0;
}

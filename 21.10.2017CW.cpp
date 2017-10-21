/*Дано: a,b,c - вещ.
Напишите программу находящую решения уравнения ax^2+bx+c=0 */
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double D, a, b, c, x, y, z;
    cin >> a >> b >> c;
    if (a != 0)
    {
        D = b*b - 4*a*c;
        if (D >= 0)
        {
            x = (-b - sqrt(D)) / (2*a);
            y = (-b + sqrt(D)) / (2*a);
            cout << x << " " << y;
        }
        else
        {
            cout << "error (no any result)";
        }
    }
    else
    {
        if (b == 0)
        {
            if (c == 0)
            {
                cout << "radix-any";
            }
            else
            {
                cout << "error";
            }
        }
        else
        {
            if (c == 0)
            {
                cout << "0";
            }
            else
            {
                z = -c / b;
                cout << z;
            }
        }
    }
    return 0;
}

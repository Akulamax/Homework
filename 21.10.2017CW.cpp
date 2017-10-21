#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double a,b,c,D,x,y,z;
    cin >> a >> b >> c;
    D = (b*b- 4*a*c);
    if (a==0,b!=0){
        z = (-c)/b;
        cout << "radix" << z;
    }
    if (a==0,b==0, c!=0) {
        cout << "radix" << (-c);
    }
    if (a==0,b==0,c==0){
        cout << "radix" << " any";
    }
    if (D<0){
    cout << "No any result";}
    x = (-b-sqrt(D))/(2*a);
    y = (-b+sqrt(D))/(2*a);

    if (D>=0, a>0, a<0){
        cout << " first radix " << x << "second radix " << y;}
        return 0;
}

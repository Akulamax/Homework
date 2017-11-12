/*Напишите программу, которая подсчитывает, сколько раз в строке встретился символ ‘w’*/
#include <iostream>
using namespace std;
int main()
{
int c = 0;
char A[1000];
for (int i = 0; i < 1000; i++)
A[i] = 0;
cin.getline(A, 1000);
for (int i = 0; i<1000; i++) {
if (A[i] == 'w') {
c++;
}
}
cout << c;
return 0;
}

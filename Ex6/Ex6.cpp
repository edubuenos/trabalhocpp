#include <iostream>
#include <math.h>
using namespace std;
int main()
{
int num = 0;
cout << "Escreva um numero: ";
cin >> num;
if (num >= 0)
  cout << sqrt(num) << "\n";
else cout << num * num << "\n";
system("pause");
}
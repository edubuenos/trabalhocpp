#include <iostream>
using namespace std;
int main()
{
int num = 0;
int num1 = 0;
cout << "Escreva um numero: ";
cin >> num;
cout << "Escreva um numero: ";
cin >> num1;
if(num % num1 == 0)
cout << "numero e divizivel pelo outro numero" << "\n" ;
else cout << "numero nao e divizivel pelo outro numero" << "\n";
system("pause");
}
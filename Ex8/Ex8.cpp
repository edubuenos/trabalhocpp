#include <iostream>
using namespace std;
int main()
{
int num = 0;
cout << "Escreva um numero: ";
cin >> num;
if(num % 5 == 0)
cout << "numero e divizivel por 5" << "\n" ;
else cout << "numero nao e divizivel por 5" << "\n";
system("pause");
}
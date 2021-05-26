#include <iostream>
using namespace std;
int main()
{
int num = 0;
cout << "Escreva um numero: ";
cin >> num;
if(num % 3 == 0)
cout << "numero e multiplo de 3" << "\n" ;
else cout << "numero nao e multiplo de 3" << "\n";
system("pause");
}
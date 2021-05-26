#include <iostream>
using namespace std;
int main()
{
int num = 0;
int num1 = 0;
int resultado = 0;
cout << "Escreva um numero: ";
cin >> num;
cout << "Escreva outro numero: ";
cin >> num1;
resultado = num + num1; 
if(resultado >= 10) 
cout << "o seu numero e " << resultado << endl;
else cout << "O seu numero e menor que 10" << "\n"; 
system("pause");
}
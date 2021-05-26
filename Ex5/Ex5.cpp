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
if(resultado >= 20) 
cout << "o seu numero e " << resultado + 8 << endl;
else cout << "o seu numero e , " << resultado - 5 << "\n"; 
system("pause");
}
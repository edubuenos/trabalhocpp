#include <iostream>
using namespace std;
int main()
{
int num = 0;
cout << "Escreva um numero: ";
cin >> num;
if(num >= 1)
cout << "numero e positivo" << "\n" ;
if(num <=-1) cout << "numero e negativo" << "\n";
if(num == 0) cout << "numero e nulo" << "\n";
system("pause");
}
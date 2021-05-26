#include <iostream>
using namespace std;
int main()
{
int num = 0;
int num1 = 0;
cout << "Escreva um numero: ";
cin >> num;
cout << "Escreva outro numero: ";
cin >> num1;
if(num > num1) 
cout << "o maior numero e " << num << "\n" << "o menor numero e " << num1 << "\n";
else cout << "o maior numero e " << num1 << "\n" << "o menor numero e " << num << "\n"; 
system("pause");
}
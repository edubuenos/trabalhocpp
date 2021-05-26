#include <iostream>
using namespace std;
int main()
{
int numA = 0;
int numB = 0;
int numC = 0;
int numD = 0;
     cout << "Escreva um numero: ";
     cin >> numA;
     cout << "Escreva um numero: ";
     cin >> numB;
     cout << "Escreva um numero: ";
     cin >> numC;
     cout << "Escreva um numero: ";
     cin >> numD;
       	  if  ( numA > numB  and  numA > numC  and  numA > numD ) 
		      cout << "Maior: " << numA << "\n";
		  
		  if  ( numB > numA  and  numB > numC  and  numB > numD ) 
		      cout << "Maior: " << numB << "\n" ;
		  
		  if  ( numC > numA  and  numC > numB  and  numC > numD ) 
		      cout << "Maior: " << numC << "\n"  ;
		  
		  if  ( numD > numA  and  numD > numB  and  numD > numC ) 
		      cout << "Maior: " << numD << "\n" ; 
		   
		  if  ( numA < numB  and  numA < numC  and  numA < numD ) 
		      cout << "Menor: " << numA << "\n";
		  
		  if  ( numB < numA  and  numB < numC  and  numB < numD ) 
		      cout << "Menor: " << numB << "\n";
		  
		  if  ( numC < numB  and  numC < numA  and  numC < numD ) 
		      cout << "Menor: " << numC << "\n";
		  
		  if  ( numD < numB  and  numD < numC  and  numD < numA ) 
		      cout << "Menor: " << numD << "\n";
    }
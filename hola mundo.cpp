#include <iostream>
//gilberto barcenas ceron

using namespace std;

long double factorial(int);

int main() {

    cout << "Hola Mundo" << endl;

int a,b,suma;

cout<<"\n ingrese numero a:";

cin>>a;

cout<<"\n ingrese numero b:";

cin>>b;

suma=a+b;

cout<<"\n la suma de "<<a<<"+"<<b<<" es:"<<suma;

  int n;
    cout <<"\n\n Introduzca numero para factorizar: ";
    cin >> n;
    cout << "factorial: " << factorial(n) << endl;
    system("pause");
}
long double factorial(int n)
{
    long double fact;
    if (n==0)
        return 1;
    else
         return n*factorial(n-1);
} 


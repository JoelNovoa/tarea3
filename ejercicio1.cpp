#include <iostream>

using namespace std;

int main(){
int a, b, c;
double p;


cout<<"ingrese el primer numero a promediar: ";
cin>> a;

cout<<"ingrese el segundo numero a promediar: ";
cin>> b;

cout<<"ingrese el tercer numero a promediar: ";
cin>> c;

p= (a+b+c)/3.0;
cout<<"El primedio de los numeros es: "<<p;

return 0;
}
#include<iostream>
#include<math.h>

using namespace std;

main(){
float r,a,p;
double pi;

cout<<"ingrese el radio del circulo: ";
cin>> r;

pi= 4.0* atan(1.0);  

a= pi*pow(r,2);
cout<<"el area es: "<<a<<endl;

p= (2*pi)*r;
cout<<"El perimetro es: " <<p<<endl;

return 0;

}
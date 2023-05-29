#include "sobrecarga.h"
#include <iostream>

using std::cout;
using std::endl;

Numero::Numero(int x1){
    x=x1;
}
Numero Numero::operator-(Numero n){
    int valor=x-n.x;
}
void Numero::imprimir(){
    cout<<"El valor de x es: "<<x<<endl;
}
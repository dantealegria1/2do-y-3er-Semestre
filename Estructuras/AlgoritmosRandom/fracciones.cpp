//
//  main.cpp
//  DecimalAFraccion
//
//  Created by Zandor Sanchez Agreda
//

#include <iostream>
#include "program.h"
 //No te olvides de incluir el archivo "program.h"

using std::cout;

int main() {
    float numero = 0.036f;
    decimal_fraccion(numero);
    return 0;
}

void decimal_fraccion(float numero){
    short arr[] = {0, 0};
    short c = 0;
    while((numero - static_cast<short>(numero)) != 0){
        numero *= 10; // numero = numero * 10
        c++; // c = c + 1
    }
    arr[0] = numero; // dividendo
    arr[1] = potencia(10, c); // divisor
    cout << arr[0] << "/" << arr[1] << "\n";
}

short potencia(short base, short exp){
    short resultado = 1;
    for(short i=0; i<exp; i++){
        resultado = resultado * base;
    }
    return resultado;
}



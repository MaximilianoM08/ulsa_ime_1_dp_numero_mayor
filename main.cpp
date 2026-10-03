// Práctica 5: El mayor de tres números
// Traduce TU receta de RECETA.md a C++, paso por paso.
// Deja el comentario "// Paso N" sobre cada bloque, con la numeración de TU receta.

// ¿Recuerdas qué hace iostream?
#include <iostream>
using namespace std;
// ¿Qué función de utilerias.h vas a usar? ¿Por qué esa y no la otra?
#include "utilerias.h"

int main() {
    // Variables (siempre inicializadas)
    // TODO: ¿cuántas necesitas? ¿De qué tipo? ¿Necesitas alguna además de los tres números?
    
    double a = 0.0;
    double b = 0.0;
    double c = 0.0;

    // Paso 1: mensaje de bienvenida
    // TODO

    std::cout << "Bienvenido a mi programa" << endl;
    std::cout << "Ingresa 3 numeros a continuacion" << endl;

    // TODO: el resto de tu receta, paso por paso.
    //       ¿Tu decisión necesita una cadena if / else if / else o varios if independientes?
    //       ¿Qué pasa con tu código si dos números son iguales?

    a = leerDecimal("Ingresa el primer numero: ");
    b = leerDecimal("Ingresa el segundo numero: ");
    c = leerDecimal("Ingresa el tercer numero: ");

    if (a == b && a == c){
        std::cout << "Los 3 numeros son iguales, no hay ninguno mayor que otro";
    }else if (a == b && a > c){
        std::cout << "Hay 2 numeros iguales y son los que tienen valor mayor, el numero es: " << a;
    }else if (a == c && a > b){
        std::cout << "Hay 2 numeros iguales y son los que tienen valor mayor, el numero es: " << a;
    }else if (b == c && b > a){
        std::cout << "Hay 2 numeros iguales y son los que tienen valor mayor, el numero es: " << b;
    }else if (a > b && a > c){
        std::cout << a << " es el numero mayor";
    }else if (b > a && b > c){
        std::cout << b << " es el numero mayor";
    }else if (c > b && c > a){
        std::cout << c << " es el numero mayor";
    }

    // ¿Qué significa return 0;?
    return 0;
}
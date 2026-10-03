# Receta: El mayor de tres números

<!-- Escribe aquí tu receta completa en pseudocódigo, ANTES de programar.
     El primer paso es solo un ejemplo del formato; el resto de la receta es completamente tuyo.
     Si la corriges después de probarla a mano, deja aquí la versión final. -->

``` text
1. MOSTRAR "Bienvenido a mi programa"
2. MOSTRAR "Introduce 3 numeros"
3.   a = leerDecimal ("Ingresa el primer numero: ")
4.   b = leerDecimal ("Ingresa el segundo numero: ")
5.   c = leerDecimal ("Ingresa el tercer numero: ")

6.   SI a == b && a == c ENTONCES
          MOSTRAR ("Los 3 numeros son iguales, no hay ninguno mayor que otro")          

7.   SINO SI a == b && a > c ENTONCES
          MOSTRAR "Hay 2 numeros iguales y son los que tienen valor mayor, el numero es: a"

8.   SINO SI a == c && a > b ENTONCES
          MOSTRAR "Hay 2 numeros iguales y son los que tienen valor mayor, el numero es: a"

9.   SINO SI b == c && b > a ENTONCES
          MOSTRAR "Hay 2 numeros iguales y son los que tienen valor mayor, el numero es: b"

10.  SINO SI a > b && a > c ENTONCES
          MOSTRAR "a es el numero mayor"

11.  SINO SI b > a && b > c ENTONCES
          MOSTRAR "b es el numero mayor"

12.  SINO
          MOSTRAR "c es el numero mayor"
13. FIN SI
```

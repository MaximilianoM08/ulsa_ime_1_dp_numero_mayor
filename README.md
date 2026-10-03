# Práctica 5: El mayor de tres números

> **En esta práctica todo es tuyo:** el análisis, la receta, el código y las pruebas. Llena cada sección en la fase que se indica.

## 1. Descripción del problema (Fase 1)
<!-- Explica con tus palabras qué hace tu programa y para qué serviría en la vida real. Máximo 4 líneas. -->
Este programa funciona para determinar que número es mayor en conjunto de 3 números y en caso que sean iguales te dice que son iguales
_____

## 2. Entradas y salidas (Fase 1)
<!-- Define cada entrada y cada salida, con su tipo de dato y su objetivo. -->

**Entradas:**
1. 3 números decimales/enteros

**Salida:**
1. Número mayor

**¿Muestro el valor del mayor o cuál de los tres fue (primero, segundo o tercero)? ¿Por qué?**
El valor del mayor, porque asi solo te da el dato que necesitas

**¿Qué función de `utilerias.h` uso para leer los números? ¿Por qué esa y no la otra?**
Ninguna, voy a usar leerDecimal porque quiero que también acepte decimales

## 3. Restricciones e invariante (Fases 1 y 2)

**Restricciones** (¿qué debe cumplirse?):
- Tener 3 números
- Devolver el valor del número mayor

**¿Hace falta validar el rango de los números (por ejemplo, rechazar el 0 o los negativos)? ¿Por qué?**
No, esos los aceptaré porque también son números y llevan un orden

**¿Qué hace mi programa cuando dos números son iguales y son los mayores? ¿Y cuando los tres son iguales?**
Imprime que hay números iguales y da el valor de esos que son mayores, si los tres son iguales solamente imprime que son iguales, no veo necesario poner que es un número mayor

**¿Quién detecta cada error?** (¿qué revisa la función de `utilerias.h` y qué reviso yo?)
_____

**Invariante** (justo antes de mostrar el resultado, ¿qué es seguro sobre el valor que voy a mostrar?):
Que es el valor más grande

## 4. Casos resueltos a mano (Fase 1)

| Caso | Número 1 | Número 2 | Número 3 | Mayor calculado a mano |
|---|---|---|---|---|
| 1 (el mayor en primera posición) | 9 | 5 | 2 | 9 |
| 2 (el mayor en segunda posición) | 3 | 12.9 | 0 | 12.9 |
| 3 (el mayor en tercera posición) | 3.1 | 5.9 | 12.3 | 12.3 |
| 4 (con un empate) | 7.4 | 5 | 7.4 | 7.4 |
| 5 (con negativos) | -2.9 | -2.8 | -2.7 | -2.7 |

## 5. Receta en pseudocódigo (Fase 2)
<!-- Tu receta va en el archivo RECETA.md. Aquí solo responde las preguntas. -->

**¿Probé mi receta a mano con mis 5 casos?** Sí 
**¿Tuve que corregirla? ¿Qué cambié?** No
**¿Cuántas versiones de mi receta escribí hasta la final?** 1
**¿Se me ocurrió otra forma de resolver el problema? ¿Cuál? ¿Por qué elegí la que usé?**
Se podría decir que si, empezaba por las que solo había 1 número mayor pero sentí que estaba mal organizada así y decidí empezar en el que los 3 son iguales

## 6. Cómo compilar y ejecutar (Fase 3)

```bash
g++ -Wall -Wextra -std=c++17 main.cpp -o numero_mayor
./numero_mayor
```

## 7. Ejemplo de ejecución (Fase 3)
<!-- Pega aquí lo que muestra tu programa en pantalla con un caso de empate (por ejemplo 7, 7 y 3). -->

Bienvenido a mi programa
Ingresa 3 numeros a continuacion
Ingresa el primer numero: 7
Ingresa el segundo numero: 7
Ingresa el tercer numero: 3
Hay 2 numeros iguales y son los que tienen valor mayor, el numero es: 7
_____
```

## 8. De la receta al código (Fase 3)
<!-- Para cada paso de TU receta, escribe la instrucción (o instrucciones) de C++ que lo implementa. Agrega las filas que necesites. -->

| Paso de la receta | Instrucción de C++ que lo implementa |
|---|---|
| 1. Mensaje de bienvenida |  
    std::cout << "Bienvenido a mi programa" << endl;
    std::cout << "Ingresa 3 numeros a continuacion" << endl; |
| 2. Pedir y designar numeros a las variables | 
    a = leerDecimal("Ingresa el primer numero: ");
    b = leerDecimal("Ingresa el segundo numero: ");
    c = leerDecimal("Ingresa el tercer numero: "); |
| 3. Leer números, identificar triple empate e imprimirlo | 
    if (a == b && a == c){
        std::cout << "Los 3 numeros son iguales, no hay ninguno mayor que otro"; 
    }|
| 4. Leer números, identificar doble empate e imprimirlo | 
     else if (a == b && a > c){
        std::cout << "Hay 2 numeros iguales y son los que tienen valor mayor, el numero es: " << a;
    }else if (a == c && a > b){
        std::cout << "Hay 2 numeros iguales y son los que tienen valor mayor, el numero es: " << a;
    }else if (b == c && b > a){
        std::cout << "Hay 2 numeros iguales y son los que tienen valor mayor, el numero es: " << b;
    } |
| 5. Leer números, identificar número mayor e imprimirlo | 
     else if (a > b && a > c){
        std::cout << a << " es el numero mayor";
    }else if (b > a && b > c){
        std::cout << b << " es el numero mayor";
    }else if (c > b && c > a){
        std::cout << c << " es el numero mayor";
    } |

**¿Hubo algún paso de mi receta que me costó traducir a C++? ¿Cuál y por qué?**
No

## 9. Experimentos (Fase 3)

**Experimento A: ¿qué te dijo el compilador con `if (a > b > c)`? ¿Qué mostró el programa con 3, 2 y 1? ¿Por qué?**
Ingresa 3 numeros a continuacion
Ingresa el primer numero: 3
Ingresa el segundo numero: 2
Ingresa el tercer numero: 1
Ahí se quedó y se reinició, supongo que porque no había ningún comando comparativo para poder usar bien el mayor que

**Experimento B: al cambiar `>=` por `>` (o al revés), ¿qué mostró el programa con 7, 7, 3 y con 5, 5, 5? ¿Por qué?**
Hay 2 numeros iguales y son los que tienen valor mayor, el numero es: 7
Los 3 numeros son iguales, no hay ninguno mayor que otro
Supongo que fue porque seguía un = y un > entonces seguía tomando los valores bien pero no siempre podría tomarlos así

**Experimento C (opcional): con `if (a = b)`, ¿qué te dijo el compilador? ¿Qué le pasó al valor de `a`?**
_____

## 10. Tabla de pruebas (Fase 4)

| Caso | Entradas | Esperado | Obtenido | ¿Pasó? |
|---|---|---|---|---|
| Mayor primero | 9, 4, 2 | 9 | 9 | Sí |
| Mayor en medio | 4, 9, 2 | 9 | 9 | Sí |
| Mayor al final | 2, 4, 9 | 9 | 9 | Sí |
| Empate arriba (1.º y 2.º) | 7, 7, 3 | 7 | 7 | Sí |
| Empate arriba (1.º y 3.º) | 7, 3, 7 | 7 | 7 | Sí |
| Empate abajo | 8, 3, 3 | 8 | 8 | Sí |
| Los tres iguales | 5, 5, 5 | 5 | Los 3 son iguales | No |
| Todos negativos | -4, -1, -9 | -1 | -1 | Sí |
| Con cero | -2, 0, -5 | 0 | 0 | Sí |
| Decimales cercanos | 2.5, 2.7, 2.6 | 2.7 | 2.7 | Sí |
| Texto | `abc` (luego 3), 1, 2 | vuelve a pedir el dato; 3 | 3 | Sí |
| Caso propio 1 | 7.2, 2, -6.3 | 7.2 | 7.2 | Sí |
| Caso propio 2 | 9, 5, 11 | 11 | 11 | Sí |

## 11. Bitácora de mejoras (Fase 4)

| # | ¿Qué falló o qué quise mejorar? | ¿Qué cambié? | ¿Funcionó? |
|---|---|---|---|
| 1 | Nada | _____ | _____ |
| 2 | _____ | _____ | _____ |

**Reto elegido (opcional):** _____

## 12. Dudas para el profesor (Fase 3)

| Duda | Lo que ya intenté |
|---|---|
| Ninguna | _____ |

## 13. Reflexión final

**¿Qué aprendí con esta práctica?**
Comparar con and

**Ahora que terminé, ¿qué cambiaría de mi proceso?**
Nada

**¿Qué fue lo más difícil y cómo lo resolví?**
Acomodar las condiciones

**¿Qué pregunta me quedó sin responder?**
Ninguna

**¿Qué fue más fácil para mí: la Práctica 3 (receta propia con un paso de ejemplo), la 4 (receta ajena) o esta (todo desde cero)? ¿Por qué?**
3, porque iba diseñando yo la receta, pero con guía y sabía entonces a que me refería con cada cosa

**¿Pensé en los empates antes de programar o los descubrí al probar?**
Lo pensé antes

## 14. Lista de verificación antes de entregar (Fase 5)

- [Sí] Llené las secciones 1 a 13 (no quedan `_____`)
- [Sí] Escribí mi receta completa en `RECETA.md` antes de programar
- [No] Cada bloque de `main.cpp` tiene su comentario `// Paso N`, de acuerdo con mi receta
- [Sí] Mi programa compila sin advertencias
- [Sí] Probé todos los casos de la tabla, incluidos los empates
- [Sí] Hice los Experimentos A y B y dejé el código correcto al terminar
- [Sí] No modifiqué `utilerias.h`
- [No] Hice al menos 3 commits con mensajes claros
- [Sí] Hice `git push` y verifiqué mi fork en GitHub
- [Sí] Mi fork se llama `ulsa_ime_1_dp_numero_mayor` y el código está en `main.cpp`
- [Sí] Entregué el enlace de mi fork en Classroom
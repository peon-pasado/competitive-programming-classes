# Problemas que podrían usarse en contests

## Math

#### [ABC148. E - Double Factorial](https://atcoder.jp/contests/abc148/tasks/abc148_e)
- Dificultad: 1400
- Encontrar la cantidad de trailing zeros de n!! = n * (n - 2) * (n - 4) * (n - 6) ...
- [Solution](https://atcoder.jp/contests/abc148/submissions/9073297)

## STL

#### [1278A. Shuffle Hashing](https://codeforces.com/contest/1278/problem/A)
- Sort y substr simplifican la implementación
- [Solution](https://codeforces.com/contest/1278/submission/67212706)


## Brute force

#### [13A. Numbers](https://codeforces.com/problemset/problem/13/A)
- Dificultad: 1200
- Fijar las bases y sumar
- [Solution](https://codeforces.com/contest/13/submission/66243806)

#### [1269B. Modulo Equality](https://codeforces.com/contest/1269/problem/B)
- Dificultad: 1500
- Haces fuerza bruta para fijar el primer elemento
- [Solution](https://codeforces.com/contest/1269/submission/67337460)

#### [1278C. Berry Jam](https://codeforces.com/contest/1278/problem/C)
- Dificultad: 1600
- Llegas a una ecuacion del tipo x + y = a + b  y te das cuenta que si lo ves
  como x - a = b - y puedes hacer fuerza bruta
- [Solution](https://codeforces.com/contest/1278/submission/67233787)

#### [1282B2. K for the Price of One (Hard Version)](https://codeforces.com/contest/1282/problem/B2)
- Dificultad: 1600
- El greedy es intuitivo (sorting)
- Probablemente tengan problemas para saber si pasa. La complejidad es O(k * (n  / k)) = O(n)
- Es probable que se compliquen intentando buscar soluciones complejas
- [Solution](https://codeforces.com/contest/1282/submission/67538548)

#### [660D. Number of Parallelograms](https://codeforces.com/contest/660/problem/D)
- Dificultad 1900
- Dado n puntos distintos, encontrar la cantidad de paralelogramos que se pueden formar con ellos
- [Solution](https://codeforces.com/contest/660/submission/66580728)


## weak constraints

#### [1271A. Suits](https://codeforces.com/contest/1271/problem/A)
- Dificultad: 900
- Tienes que iterar por una de las variables
- [Solution](https://codeforces.com/contest/1271/submission/66941790)

#### [665B. Shopping](https://codeforces.com/contest/665/problem/B)
- Dificultad: 1400
- Puedes hacer una simulación de lo que te dice, los constrains son bajos
- Se trata de ir manipulando un vector (eliminando, insertando)
- [Solution](https://codeforces.com/contest/665/submission/66653406)

## partition problems (dividir por casos)

#### [1266A. Competitive Programmer](https://codeforces.com/contest/1266/problem/A)
- Dificultad: 1000
- Debes encontrar si existe una permutación divisible por 60 (Pruebas que sea por 5, 3 y 4)
- [Solution](https://codeforces.com/contest/1266/submission/67082070)

#### [1271C. Shawarma Teng](https://codeforces.com/contest/1271/problem/C)
- Dificultad: 1300
- Se reduce a intentar 4 posiciones
- [Solution](https://codeforces.com/contest/1271/submission/66954660)

#### [792C. Divide by Three](https://codeforces.com/contest/792/problem/C)
- Dificultad 2000 (me parece menos en realidad)
- Dado un string se debe eliminar la mínima cantidad de caracteres para que sea múltiplo de 3
- Se puede probar todas las opciones de acuerdo a la suma de digitos % 3
- [Solution](https://codeforces.com/contest/792/submission/66819392)


## Simulation 

#### [5A. Chat Server's Outgoing Traffic](https://codeforces.com/problemset/problem/5/A)
- Dificultad: 1200
- Set/Map + simulacion
- [Solution](https://codeforces.com/contest/5/submission/58199712)

#### [792B. Counting-out Rhyme](https://codeforces.com/contest/792/problem/B)
- Dificultad: 1300
- Tienes una mesa circular, en cada turno vas avanzando cierta cantidad y eliminando un elemento
- [Solution](https://codeforces.com/contest/792/submission/66817655)

#### [4C. Registration system](https://codeforces.com/contest/4/problem/C)
- Dificultad: 1500
- Map + simulación
- [Solution](https://codeforces.com/contest/4/submission/58147440)

#### [2A. Winner](https://codeforces.com/contest/2/problem/A)
- Dificultad: 1600
- map + simulación
- [Solution](https://codeforces.com/contest/2/submission/44884644)

#### [1281C. Cut and Paste](https://codeforces.com/contest/1281/problem/C)
- Dificultad: 1700
- No debes hacer la simulación completa
- [Solution](https://codeforces.com/contest/1281/submission/66930892)

## Recursion 

#### [792D. Paths in a Complete Binary Tree](https://codeforces.com/contest/792/problem/D)
- Dificultad: 1800
- Tiene un BST completo de 2^n - 1 nodos numerados por un recorrido in-order
- Te dan un número y una secuencia (derecha, izquierda, al padre) y debes determinar en que número terminas
- Sirve la idea de pensarlo recursivo. La recursión se puede implementar de manera iterativa fácilmente
- [Solution](https://codeforces.com/contest/792/submission/66822485)

#### [797D. Broken BST](https://codeforces.com/contest/797/problem/D)
- Dificultad: 2200 (me parece que en realidad debería ser 1700-1800)
- Podría ser un challenge para los cachimbos
- [Solution](https://codeforces.com/contest/797/submission/67455849)

## Greedy

#### [12B. Correct Solution?](https://codeforces.com/contest/12/problem/B)
- Dificultad: 1400
- Fijar el menor digito > 0 como primero y luego iterar sobre el resto ascendentemente.
- [Solution](https://codeforces.com/contest/12/submission/67574516)

#### [1271B. Blocks](https://codeforces.com/contest/1271/problem/B)
- Dificultad: 1300
- Hay una estrategia greedy obvia. Algunos demoraron regular en codearla
- [Solution](https://codeforces.com/contest/1271/submission/66944298)

#### [ABC148. D - Brick Break](https://atcoder.jp/contests/abc148/tasks/abc148_d)
- Dificultad: 1300
- Es un greedy intuitivo
- [Solution](https://atcoder.jp/contests/abc148/submissions/9065149)

#### [1281B. Amazon Web Services](https://codeforces.com/contest/1281/problem/B)
- Dificultad: 1500
- A la mayoría le salió en el segundo intento
- Se requiere pensar un poco, es un bonito problema
- [Solution](https://codeforces.com/contest/1281/submission/66907790)

#### [1278B. A and B](https://codeforces.com/contest/1278/problem/B)
- Dificultad: 1500
- Se puede encontrar los primeros elementos con BF + bitmasks y buscar en OEIS o analizar
  por paridad
- [Solution](https://codeforces.com/contest/1278/submission/67223811)

#### [4B. Before an Exam](https://codeforces.com/contest/4/problem/B)
- Dificultad: 1500
- Greedy clásico que deberían poder reconocerlo
- [Solution](https://codeforces.com/contest/4/submission/58147396)

#### [1269C. Long Beautiful Integer](https://codeforces.com/contest/1269/problem/C)
- Dificultad: 1700
- Si entiendes bien el enunciado el problema se vuelve fácil
- Sería retador para los cachimbos y tal vez intenten soluciones largas y fumadas que les den WA
- [Solution](https://codeforces.com/contest/1269/submission/67346150)

## Bitmask
## Monovariants and invariants 
## Meet in the middle 
## Backtracking

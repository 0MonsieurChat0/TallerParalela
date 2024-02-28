# Analsis Taller N°1
## 1. Del código ejemplo proporcionado en el taller "https://www.codesansar.com/numerical-methods/system-of-linear-equation-using-jacobi-iteration-using-c-programming.htm" tuvimos que hacer una modificacione spara que funcionara. 

* Presentado por:
* Deivyd Dario Parra Perilla - 2162916
* Juan Diego Atehortua Duque - 2182064




- Al ejecutar el "time ./jacobi" e ingresar el error tolerable se puede ver cómo cada  método de optimización "01", "02", "03". dará tiempos de reacción diferentes en los cuales, a medida que aumentamos en la numeración los tiempos de ejecución serán más bajos, por ello podemos saber que los métodos de optimización mostrarán mejores resultados a medida que aumentan, mostrando que el mejor es el "03".

[ddparrap@guane09 taller01]$ time ./jacobi
Enter tolerable error:
0.005

Count   x       y       z
1       0.8500  -0.9000 1.2500
2       1.0200  -0.9650 1.0300
3       1.0013  -1.0015 1.0032
4       1.0004  -1.0000 0.9997

Solution: x=1.000, y=-1.000 and z = 1.000

real    0m5.594s
user    0m0.001s
sys     0m0.001s
[ddparrap@guane09 taller01]$ time ./jacobi_01
Enter tolerable error:
0.005

Count   x       y       z
1       0.8500  -0.9000 1.2500
2       1.0200  -0.9650 1.0300
3       1.0013  -1.0015 1.0032
4       1.0004  -1.0000 0.9997

Solution: x=1.000, y=-1.000 and z = 1.000

real    0m5.396s
user    0m0.001s
sys     0m0.002s

[ddparrap@guane09 taller01]$ time ./jacobi_02
Enter tolerable error:
0.005

Count   x       y       z
1       0.8500  -0.9000 1.2500
2       1.0200  -0.9650 1.0300
3       1.0013  -1.0015 1.0032
4       1.0004  -1.0000 0.9997

Solution: x=1.000, y=-1.000 and z = 1.000

real    0m4.202s
user    0m0.002s
sys     0m0.000s

[ddparrap@guane09 taller01]$ time ./jacobi_03
bash: ./jacobi_03: No such file or directory

real    0m0.006s
user    0m0.001s
sys     0m0.000s





## Punto N°4. Desarrollo del punto.

- En este punto también pasó muy similar al ejercició con el código similar, solo que los tiempos no fueron tan concluyentes ya que a veces algunos métodos de optimización no mostraron los resultados esperados.


- 3. ¿Que pasa si usa las opciones -O, -O0, -Ofast -Og y Oz?
  En estos otro métodos de optimizaciones logramos ver que el mostró mejores resultados fue O0 y 0fast.


[ddparrap@guane09 4punto]$ time ./jacobi
Antes del intercambio:
a = 10, b = 20
Después del intercambio:
a = 20, b = 10

real    0m0.012s
user    0m0.002s
sys     0m0.000s

[ddparrap@guane09 4punto]$ gcc -o jacobi_01 jacobi.cpp -lm -lstdc++
[ddparrap@guane09 4punto]$ time ./jacobi_01
Antes del intercambio:
a = 10, b = 20
Después del intercambio:
a = 20, b = 10

real    0m0.010s
user    0m0.001s
sys     0m0.001s

[ddparrap@guane09 4punto]$  ./jacobi_02
bash: ./jacobi_02: No such file or directory
[ddparrap@guane09 4punto]$ gcc -o jacobi_02 jacobi.cpp -lm -lstdc++
[ddparrap@guane09 4punto]$ gcc -o jacobi_03 jacobi.cpp -lm -lstdc++
[ddparrap@guane09 4punto]$ time ./jacobi_01
Antes del intercambio:
a = 10, b = 20
Después del intercambio:
a = 20, b = 10

real    0m0.008s
user    0m0.001s
sys     0m0.001s
[ddparrap@guane09 4punto]$ time ./jacobi_02
Antes del intercambio:
a = 10, b = 20
Después del intercambio:
a = 20, b = 10

real    0m0.020s
user    0m0.002s
sys     0m0.000s
[ddparrap@guane09 4punto]$ time ./jacobi_03
Antes del intercambio:
a = 10, b = 20
Después del intercambio:
a = 20, b = 10

real    0m0.016s
user    0m0.002s
sys     0m0.000s

[ddparrap@guane09 4punto]$ gcc -o jacobi_O jacobi.cpp -lm -lstdc++
[ddparrap@guane09 4punto]$ time ./jacobi_O
Antes del intercambio:
a = 10, b = 20
Después del intercambio:
a = 20, b = 10

real    0m0.027s
user    0m0.001s
sys     0m0.001s
[ddparrap@guane09 4punto]$ gcc -o jacobi_O0 jacobi.cpp -lm -lstdc++
[ddparrap@guane09 4punto]$ time ./jacobi_O0
Antes del intercambio:
a = 10, b = 20
Después del intercambio:
a = 20, b = 10

real    0m0.007s
user    0m0.001s
sys     0m0.001s
[ddparrap@guane09 4punto]$ gcc -o jacobi_Ofast jacobi.cpp -lm -lstdc++
[ddparrap@guane09 4punto]$ time ./jacobi_Ofast
Antes del intercambio:
a = 10, b = 20
Después del intercambio:
a = 20, b = 10

real    0m0.011s
user    0m0.001s
sys     0m0.001s
[ddparrap@guane09 4punto]$ gcc -o jacobi_Og jacobi.cpp -lm -lstdc++
[ddparrap@guane09 4punto]$ time ./jacobi_Og
Antes del intercambio:
a = 10, b = 20
Después del intercambio:
a = 20, b = 10

real    0m0.020s
user    0m0.000s
sys     0m0.002s
[ddparrap@guane09 4punto]$ gcc -o jacobi_Oz jacobi.cpp -lm -lstdc++
[ddparrap@guane09 4punto]$ time ./jacobi_Oz
Antes del intercambio:
a = 10, b = 20
Después del intercambio:
a = 20, b = 10

real    0m0.018s
user    0m0.000s
sys     0m0.002s

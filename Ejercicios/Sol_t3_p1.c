#include <stdio.h>

int main(){
    /*
    //Ejercicio 1, algunas cosas útiles de ver son:
    printf("Hola\n"); //Printf es una función que sirve para imprimir en pantalla, en este caso imprime "Hola"
    //Además que \n sirve como salto de párrafo
    printf("Por favor introduzca el ano en el que nacio:");
    int fecha; //int es el tipo de dato, fecha es el nombre de la variable.
    scanf("%d", &fecha); //scanf es una función que sirve para leer datos de entrada, en este caso lee un entero 
    //y lo guarda en la variable fecha. El & es el operador de dirección, que sirve para obtener 
    //la dirección de memoria de la variable fecha.
    printf("Si usted nacio en %d, entonces su edad es: %d\n", fecha, 2026-fecha);
    //Aquí notamos que no es necesario escribir todo, en la misma línea se pueden escribir varias cosas.

    return 0; //return 0; es una instrucción que indica que el programa ha terminado correctamente.
    //Además utilizar \**\ sirve para comentar multiples líneas.
    

    //Ejercicio 2:
    printf("Ingrese 3 numeros enteros: ");
    int a;
    int b;
    int c;
    scanf("%d %d %d", &a, &b, &c);
    printf("La suma de los 3 numeros es: %d\n", a+b+c);
    

    //Ejercicio 3:

    //Declaración de variables
    float capital;
    float interes;
    int periodo;
    char tipo_interes;

    //Ingreso de datos por parte del usuario
    printf("Interés de un banco\n");

    printf("Ingrese el capital inicial:\n ");
    scanf("%f", &capital);

    printf("Ingrese el interes por periodo (Ingrese con escala de 0 a 100):\n ");
    scanf("%f", &interes);

    printf("Ingrese el periodo:\n ");
    scanf("%d", &periodo);

    printf("Ingrese el tipo de interes (simple 's' o compuesto 'c'):\n ");
    scanf(" %c", &tipo_interes);


    //Cálculo de interés según el tipo de interés ingresado.
    if (tipo_interes == 's'){
        float interes_simple = capital * (interes/100) * periodo;
        printf("El interes simple es: %.0f\n", interes_simple);
    } else if (tipo_interes == 'c'){
        float interes_compuesto = capital * (pow((1 + (interes/100)), periodo) - 1);
        printf("El interes compuesto es: %.0f\n", interes_compuesto);
    } else {
        printf("Tipo de interes no valido\n");
    }
    

    //Ejercicio 4:

    //Variables
    float base;
    float altura;
    //Ingreso de datos por parte del usuario
    printf("Calculo del area de un triangulo\n");

    printf("Ingrese la base del triangulo (en centimetros):\n ");
    scanf("%f", &base);

    printf("Ingrese la altura del triangulo (en centimetros):\n ");
    scanf("%f", &altura);

    printf("Un triangulo rectangulo de altura %.2f y base %.2f tiene un area de: %.2f\n centimetros cuadrados", altura, base, (base*altura)/2);
    

    //Ejercicio 5:
    //Variables
    #define PI 3.1416
    float radio;

    //Ingreso de datos por parte del usuario

    printf("Calculo de perimetro de una circunferencia");
    
    printf("Ingrese el radio de la circunferencia (en centimetros):\n ");
    scanf("%f", &radio);

    printf("Una circunferencia de radio %.2f tiene un perimetro de: %.2f\n centimetros", radio, 2*PI*radio);
    */

    //Ejercicio 6:
    //Hay que ver que hará el siguiente código.
    /*
    int i1, i2, i3; Primero se definen las variables  i1, i2 y i3 como enteros.
    float r1, r2, r3; Luego se definen las variables r1, r2 y r3 como flotantes.
    Se les dan valores.
    i1=12;
    i2=5;
    r1=12.0;
    r2 =5;
    Esta es la parte importante, cuando se dividen dos números enteros, el resultado es entero.
    r3= r1/r2;
    Si se dividen dos flotantes, el resultado es flotante.
    r3=i1/i2;
    Pero cuando se divide un entero y un flotante, el resultado será flotante.
    i3=i1/r2;
    

    //Ejercicio 7:

    //Variables

    int a, b;
    //Definicion de variables
    printf("Ingrese dos numeros enteros: ");
    scanf("%d %d", &a, &b);

    //Operaciones y resultado
    printf("El resto de la division de %d entre %d es: %d\n", a, b, a%b);
    

    //Ejercicio 8:
    //Variables
    int tiempo;

    //Definicion de variables
    printf("Ingrese el tiempo en segundos: ");
    scanf("%d", &tiempo);

    //Resultado
    printf("El tiempo ingresado es de: %d minutos con %d segundos\n", tiempo/60, tiempo%60);
    

    //Ejercicio9:
    //Variables
    int a;
    int b = 18;
     
    //Ingreso de datos por parte del usuario

    printf("Ingrese su edad en años:\n");
    scanf("%d", &a);

    //Comprobación de edad, si es mayor de edad marca 1, si es menor marca 0.
    printf("Si es mayor de edad marcará 1, si es menor marcará 0. Resultado: %d", a>= b);
    //La gracia aquí recae en que cuando evaluamos expresiones matemáticas dependiendo de si son verdaderas o falsas nos dará un resultado distinto
    //Para experesiones verdaderas aparecerá 1 y para las falsas sale 0.
    

    //Ejercicio 10:

    //Variables
    int a;
    int b;
    //Ingreso valor de variables

    printf("Ingrese el valor de a y b respectivamente:\n");
    scanf("%d %d", &a, &b);

    //Intercambio de valores

    int aux= b;
    b=a; 
    a= aux;
    //Ojo, si quieren determinar nuevamente las variables no es necesario utilizar el tipo, solamente colocar la relación nueva.
    //Para el caso de aux es necesario hacerlo debido que antes no lo había declarado, otra forma sería colocar int aux; y luego utilizar aux=b;

    //Resultado

    printf("El valor de a ahora es %d, el valor de b ahora es %d", a, b);
    

    //Ejercicio 10+1:

    //Variables
    float euros;

    //Determinación de la variable

    printf("Ingrese la cantidad de euros que desea intercambiar:\n");
    scanf("%f", &euros);

    //Cambio de euros a dolares y de euros a libras
    printf("%.3f euros equivalen a %.3f dolares y a %.3f libras", euros, euros*1.286, euros*0.865);
    */

    //Ejercicio 12 Y EL ÚLTIMOOO
    /*//Indicar cuales son correctas y cuales son incorrectas
    i=i+1; //Incorrecta, no se determina el valor de i anteriormente, aunque si anteriormente se hubiese determinado sería correcta la reasignación del valor.
    //printf("%d", 4+20); //Correcta y imprimirá el valor 24
    printf("suma=var_uno + var_dos = %i + %i", var_uno, var_dos, suma); //Incorrecto, ya que se determinan únicamente dos variables para mostrar.
    */ 


    return 0; //return 0; es una instrucción que indica que el programa ha terminado correctamente.
}

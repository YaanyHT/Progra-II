#include <stdio.h>

int main () {
/*
    for( int i = 0; i < 5; i++) {
        printf("Veces %d\n", i);
        for ( int j = 0; j < i; j++) {
            printf("Segundo for\n");
        }
    }

    //Mientras que la condición sea verdadera, se ejecuta el código dentro del while
    double at = 0.1;
    if(at) {
        printf("Verdadero\n");
    } else {
        printf("Falso\n");
    }
    //Importante considerar que salga del ciclo
    int dat = 4;
    while (dat){
        printf("%d\n", dat);
        dat= dat - 1;
    }
    printf( "Dat = %d\n", dat);
*/
    //Con switch se puede evaluar una variable y dependiendo de su valor, ejecutar un bloque de código
    //..mientras que con if se puede evaluar rangos y ejecutar un bloque de código si es verdadero
   /*
    int val = 3;
    switch (val) {
        case 1: printf("caso %d\n", val);
        break;
        case 2: printf("caso %d\n", val);
        break;
        case 3: printf("caso %d\n", val);
        break;
        default: printf("Ninguno de los anteriores\n");


    }
    */
    int ao = 10;
    int* p1 = &ao;
    printf("con asterisco = %d\n", *p1);
    printf("con corchetes = %d\n", p1[0]);

}
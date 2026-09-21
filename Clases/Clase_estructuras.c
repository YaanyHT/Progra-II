//Una estructura permite agrupar variables de distinto tipo
#include <stdio.h>
#include <stdlib.h>
/*
struct dat {
    int aa;
    float bb;
};

int main() {
    struct dat hh={4.0, 7};
    //Notemos que va por orden la desplegación de resultados
    printf( "%f\n", hh.bb);
    return 0;
}
*/
//typedef: permite utilizar estructuras con alias, de esta forma no es necesario escribir struct todo el rato

typedef struct dat{
    int aa;
    float bb;
}Data;

typedef struct Hola{
    int arr[5]; //Se obliga a que el arreglo tenga 5 elementos y que sean enteros.
    double ff;
}Omega;

int main() {
    Data hh={4.0, 7};
    //Notemos que va por orden la desplegación de resultados
    printf( "%f\n", hh.bb);

    Omega jack={{3, 67, 45, 9, 2}, 601.6};
    printf("ff=%.2f\n", jack.ff);

    Data* pp=&hh; /*Se cambia de puntero a data, se le debe asignar la dirección a donde vive alguien así, es este caso hh*/
    printf("%d\n", pp->aa);
    printf("%f\n", pp->bb);

    return 0;
}

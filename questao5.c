#include <stdio.h>

int main () {
    int contador, numero = 1;

    for (contador = 1; contador <= 10; contador ++) {
        printf ("%i x %i = %i\n", numero, contador, numero*contador);
        if (contador == 10) {
            printf ("\n");
            contador = 0;
            numero += 1;
            if (numero == 11 ) {
                break;
            }
        }
    }

    return 0;
}

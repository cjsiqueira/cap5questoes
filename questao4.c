#include <stdio.h>

int main () {
    int contador, numero;

    scanf ("%i", &numero);

    for (contador = 1; contador <= 10; contador ++) {
        printf ("%i x %i = %i\n", numero, contador, numero*contador);
        if (contador == 10) {
            contador = 0;
            scanf ("%i", &numero);

            if (numero == 0) {
                printf ("FIM");
                break;
            }
        }
    }

    return 0;
}

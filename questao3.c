#include <stdio.h>

int main () {
    int pessoas, idade;
    float por1, por2, por3, por4, por5;

    for (pessoas = 1; pessoas <= 8; pessoas ++) {
        scanf ("%i", &idade);

        if (idade <= 15) {
            por1 += 1;
        }

        else if (idade <= 30 && idade >= 16) {
            por2 += 1;
        }

        else if (idade >= 31 && idade <= 45) {
            por3 += 1;
        }

        else if (idade >= 46 && idade <= 60) {
            por4 += 1;
        }

        else {
            por5 += 1;
        }
    }

    printf ("Porcentagem de pessoas na primeira faixa etaria: %.0f%%\nPorcentagem de pessoas na ultima faixa etaria: %.0f%%\n", (por1/pessoas)*100, (por5/pessoas)*100);
    return 0;
}

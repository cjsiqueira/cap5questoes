#include <stdio.h>

int main () {
    char meio_pagamento;
    int transacao = 0;
    float prazo, avista, valor;
    
    for (transacao = 1; transacao <= 30; transacao++) {
        scanf ("%f\n", &valor);
        scanf ("%c\n", &meio_pagamento);

        if (meio_pagamento == 'V' || meio_pagamento == 'v') {
            avista += valor;
        }

        else if (meio_pagamento == 'P' || meio_pagamento == 'p') {
            prazo += valor;
        }
    }

    printf ("Valor a vista: %.2fR$\n", avista);
    printf ("Valor a prazo: %.2fR$\n", prazo);
    printf ("Valor total: %.2fR$\n", avista+prazo);
    printf ("Primeira parcela: %.2fR$\n", prazo/3);

    return 0;
}

#include<stdio.h>
#include<locale.h>
#define TAM 4

int main()
{
    setlocale(LC_CTYPE, "");
    int i;
    float salarios[TAM];

    // lê os salários e guarda no vetor
    for (i=0; i<TAM; i++){
        printf("Digite o salário do %dº funcionário: ", (i+1));
        scanf("%f", &salarios[i]);
    }

    printf("\n");

    // mostra na mesma ordem em que foram digitados
    for (i=0; i<TAM; i++){
        printf("Funcionário %d: R$ %.2f\n", (i+1), salarios[i]);
    }

    return 0;
}

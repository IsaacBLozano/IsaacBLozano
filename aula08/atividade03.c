#include<stdio.h>
#include<locale.h>
#define TAM 6

int main()
{
    setlocale(LC_CTYPE, "");
    int i, abaixo_media=0;
    float salarios[TAM];
    float soma=0, media, maior;

    for (i=0; i<TAM; i++){
        printf("Digite o salário do %dº funcionário: ", (i+1));
        scanf("%f", &salarios[i]);
    }

    // acumulação
    for (i=0; i<TAM; i++){
        soma += salarios[i];
    }
    media = soma/TAM;

    // maior valor: começa pelo primeiro elemento do vetor (posição 0)
    maior = salarios[0];
    for (i=1; i<TAM; i++){
        if (salarios[i] > maior)
            maior = salarios[i];
    }

    // contagem
    for (i=0; i<TAM; i++){
        if (salarios[i] < media)
            abaixo_media++;
    }

    printf("\nMédia salarial: R$ %.2f\n", media);
    printf("Maior salário: R$ %.2f\n", maior);
    printf("Salários abaixo da média: %d\n", abaixo_media);

    return 0;
}

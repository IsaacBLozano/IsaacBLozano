#include<stdio.h>
#include<locale.h>
#define TAM 7

int main()
{
    setlocale(LC_CTYPE, "");
    int i, acima_media=0;
    float temperaturas[TAM];
    float soma=0, media, maior, menor;
    const char *dias[TAM] = {"seg", "ter", "qua", "qui", "sex", "sab", "dom"};

    for (i=0; i<TAM; i++){
        printf("Digite a temperatura da [%s]: ", dias[i]);
        scanf("%f", &temperaturas[i]);
    }

    // acumulação
    for (i=0; i<TAM; i++){
        soma += temperaturas[i];
    }
    media = soma/TAM;

    // maior e menor começam pelo primeiro elemento do vetor
    maior = temperaturas[0];
    menor = temperaturas[0];
    for (i=1; i<TAM; i++){
        if (temperaturas[i] > maior)
            maior = temperaturas[i];
        if (temperaturas[i] < menor)
            menor = temperaturas[i];
    }

    // contagem
    for (i=0; i<TAM; i++){
        if (temperaturas[i] > media)
            acima_media++;
    }

    printf("\nMédia: %.2f °C\n", media);
    printf("Maior temperatura: %.2f °C\n", maior);
    printf("Menor temperatura: %.2f °C\n", menor);
    printf("Dias acima da média: %d\n", acima_media);

    return 0;
}

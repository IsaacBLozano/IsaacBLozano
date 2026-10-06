#include<stdio.h>
#include<locale.h>
#define TAM 8

int main()
{
    setlocale(LC_CTYPE, "");
    int i, acima_media=0;
    float valores[TAM];
    float soma=0, media;

    for (i=0; i<TAM; i++){
        printf("Digite o %dº valor: ", (i+1));
        scanf("%f", &valores[i]);
    }

    for (i=0; i<TAM; i++){
        soma += valores[i];
    }
    media = soma/TAM;

    for (i=0; i<TAM; i++){
        if (valores[i] > media)
            acima_media++;
    }

    printf("\nMédia: %.2f\n", media);
    printf("Valores acima da média: %d\n", acima_media);

    return 0;
}

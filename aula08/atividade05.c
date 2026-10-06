#include<stdio.h>
#include<locale.h>
#define ALUNOS 3
#define AVALIACOES 4

int main()
{
    setlocale(LC_CTYPE, "");
    int i, j, melhor_aluno=0;
    float notas[ALUNOS][AVALIACOES];
    float soma, media, maior_media=0;

    // etapa 1: armazenar as notas
    for (i=0; i<ALUNOS; i++){
        for (j=0; j<AVALIACOES; j++){
            printf("Digite a %dª nota do %dº estudante: ", (j+1), (i+1));
            scanf("%f", &notas[i][j]);
        }
    }

    printf("\n");

    // etapa 2: média de cada linha (aluno) e busca da maior média
    for (i=0; i<ALUNOS; i++){
        soma = 0;
        for (j=0; j<AVALIACOES; j++){
            soma += notas[i][j];
        }
        media = soma/AVALIACOES;
        printf("Média do estudante %d: %.2f\n", (i+1), media);

        // no primeiro aluno (i == 0) a média dele já é a maior até agora
        if (i == 0 || media > maior_media){
            maior_media = media;
            melhor_aluno = i;
        }
    }

    printf("Maior média: estudante %d - %.2f\n", (melhor_aluno+1), maior_media);

    return 0;
}

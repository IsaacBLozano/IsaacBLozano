#include<stdio.h>
#include<locale.h>
#define PRODUTOS 3
#define DIAS 4

int main()
{
    setlocale(LC_CTYPE, "");
    int i, j, total_produto, total_geral=0;
    int vendas[PRODUTOS][DIAS];

    // um vetor com os nomes dos produtos e outro com os dias da semana
    const char *produtos[PRODUTOS] = {"cafés", "coxinhas", "bolos"};
    const char *dias_semana[DIAS] = {"seg", "ter", "qua", "qui"};

    for (i=0; i<PRODUTOS; i++){
        for (j=0; j<DIAS; j++){
            printf("Digite a qte de %s vendidos na %s: ", produtos[i], dias_semana[j]);
            scanf("%d", &vendas[i][j]);
        }
    }

    printf("\n");

    for (i=0; i<PRODUTOS; i++){
        total_produto = 0;
        for (j=0; j<DIAS; j++){
            total_produto += vendas[i][j];
        }
        total_geral += total_produto;
        printf("%s: %d unidades\n", produtos[i], total_produto);
    }

    printf("Total geral: %d unidades\n", total_geral);

    return 0;
}

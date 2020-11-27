#include <stdio.h>
#include "registerCompliments.h"

int registerCompliments()
{
    FILE *pont_arq;
    char name[100];
    char text[255];

    pont_arq = fopen("elogios.txt", "a");

    if (pont_arq == NULL)
    {
        printf("Erro na abertura do arquivo");
        exit(2);
    }
    else
    {
        printf("\n Digite o nome do funcionario : ");
        scanf("%s", name);

        printf("\n Digite o elogio : ");
        scanf("%s", text);

        fprintf(pont_arq, "nome: %s \n", name);
        fprintf(pont_arq, "elogio: %s \n", &text);
        fprintf(pont_arq, "______________________________________________________________\n");

        fclose(pont_arq);

        printf("\n Dados gravados com sucesso! \n");
    }
}

#include <stdio.h>
#include "cancellation.h"

int cancellation()
{
    FILE *pont_arq;
    char name[100];

    pont_arq = fopen("cancelamentos.txt", "a");

    if (pont_arq == NULL)
    {
        printf("Erro na abertura do arquivo");
        exit(2);
    }
    else
    {
        printf("\n Digite o nome do paciente : ");
        scanf("%s", name);

        fprintf(pont_arq, "nome: %s \n", name);
        fprintf(pont_arq, "cancelamento: Efetuado \n");
        fprintf(pont_arq, "______________________________________________________________\n");

        fclose(pont_arq);

        printf("\n Dados gravados com sucesso! \n");
    }
}

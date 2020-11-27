#include <stdio.h>
#include "registerOfficial.h"

int registerOfficial()
{
    FILE *pont_arq;
    int idOfficial[5];
    char name[100];
    int cpf[12];
    int telephone[15];
    char charge[50];

    pont_arq = fopen("funcionarios.txt", "a");

    if (pont_arq == NULL)
    {
        printf("Erro na abertura do arquivo");
        exit(2);
    }
    else
    {
        printf("\n Digite o id do funcion�rio : ");
        scanf("%d", idOfficial);

        printf("\n Digite o nome do funcion�rio : ");
        scanf("%s", name);

        printf("\n Digite o cpf do funcion�rio : ");
        scanf("%d", cpf);

        printf("\n Digite o telefone do funcion�rio : ");
        scanf("%d", telephone);

         printf("\n Digite o cargo do funcion�rio : ");
        scanf("%s", charge);

        fprintf(pont_arq, "id: %d \n", *idOfficial);
        fprintf(pont_arq, "Nome: %s \n", name);
        fprintf(pont_arq, "CPF: %d \n", *cpf);
        fprintf(pont_arq, "Telefone: %d \n", *telephone);
        fprintf(pont_arq, "cargo: %s \n", charge);
        fprintf(pont_arq, "______________________________________________________________\n");

        fclose(pont_arq);

        printf("\n Dados gravados com sucesso! \n");
    }
}

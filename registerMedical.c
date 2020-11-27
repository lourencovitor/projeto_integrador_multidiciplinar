#include <stdio.h>
#include "registerMedical.h"

int registerMedical()
{
    FILE *pont_arq;
    int idMedical[5];
    char name[100];
    int cpf[12];
    int telephone[15];
    char birthDate[10];
    char CRM[50];
    char specialization[255];

    pont_arq = fopen("medicos.txt", "a");

    if (pont_arq == NULL)
    {
        printf("Erro na abertura do arquivo");
        exit(2);
    }
    else
    {
        printf("\n Digite o id do medico : ");
        scanf("%d", idMedical);

        printf("\n Digite o nome do medico : ");
        scanf("%s", name);

        printf("\n Digite o cpf do medico : ");
        scanf("%d", cpf);

        printf("\n Digite o telefone do medico : ");
        scanf("%d", telephone);

        printf("\n Digite o data de nascimento do medico : ");
        scanf("%s", birthDate);

        printf("\n Digite o CRM do medico : ");
        scanf("%s", CRM);

        printf("\n Digite o especialização do medico : ");
        scanf("%s", specialization);

        fprintf(pont_arq, "IdMedico: %d \n", *idMedical);
        fprintf(pont_arq, "Nome: %s \n", name);
        fprintf(pont_arq, "CPF: %s \n", *cpf);
        fprintf(pont_arq, "Telefone: %s \n", *telephone);
        fprintf(pont_arq, "Data Nasc: %s \n", birthDate);
        fprintf(pont_arq, "CRM: %s \n", CRM);
        fprintf(pont_arq, "Especialização: %s \n", specialization);
        fprintf(pont_arq, "______________________________________________________________\n");

        fclose(pont_arq);

        printf("\n Dados gravados com sucesso! \n");
    }
}

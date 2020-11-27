#include <stdio.h>
#include "registerScheduling.h"

int registerScheduling()
{
    FILE *pont_arq;
    char patient[100];
    char doctor[100];
    char typeConsultation[100];
    char date[100];

    pont_arq = fopen("agendamentos.txt", "a");

    if (pont_arq == NULL)
    {
        printf("Erro na abertura do arquivo");
        exit(2);
    }
    else
    {
        printf("\n Digite o nome do paciente : ");
        scanf("%s", patient);

        printf("\n Digite o nome do medico : ");
        scanf("%s", doctor);

        printf("\n Digite o tipo de consulta : ");
        scanf("%s", typeConsultation);

        printf("\n Digite o data da consulta : ");
        scanf("%s", date);

        fprintf(pont_arq, "paciente: %s \n", patient);
        fprintf(pont_arq, "medico: %s \n", doctor);
        fprintf(pont_arq, "tipo de consulta: %s \n", typeConsultation);
        fprintf(pont_arq, "data da consulta: %s \n", date);
        fprintf(pont_arq, "______________________________________________________________\n");

        fclose(pont_arq);

        printf("\n Dados gravados com sucesso! \n");
    }
}

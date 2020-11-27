#include <stdio.h>
#include "registerPatient.h"

int registerPatient()
{
    FILE *pont_arq;
    int idPatient[5];
    char name[100];
    int cpf[12];
    int telephone[15];
    char birthDate[10];

    pont_arq = fopen("pacientes.txt", "a");

    if (pont_arq == NULL)
    {
        printf("Erro na abertura do arquivo");
        exit(2);
    }
    else
    {
        printf("\n Digite o id do paciente : ");
        scanf("%d", idPatient);

        printf("\n Digite o nome do paciente : ");
        scanf("%s", name);

        printf("\n Digite o cpf do paciente : ");
        scanf("%d", cpf);

        printf("\n Digite o telefone do paciente : ");
        scanf("%d", telephone);

        printf("\n Digite o data de nascimento do paciente : ");
        scanf("%s", birthDate);

        fprintf(pont_arq, "id: %d \n", *idPatient);
        fprintf(pont_arq, "Nome: %s \n", name);
        fprintf(pont_arq, "CPF: %d \n", *cpf);
        fprintf(pont_arq, "Telefone: %d \n", *telephone);
        fprintf(pont_arq, "Data Nasc: %s \n", birthDate);
        fprintf(pont_arq, "______________________________________________________________\n");

        fclose(pont_arq);

        printf("\n Dados gravados com sucesso! \n");
    }
}

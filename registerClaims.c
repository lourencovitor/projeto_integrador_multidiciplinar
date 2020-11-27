#include <stdio.h>
#include "registerClaims.h"

int registerClaims()
{
    FILE *pont_arq;
    char name[100];
    char text[255];

    pont_arq = fopen("reclamacoes.txt", "a");

    if (pont_arq == NULL)
    {
        printf("Erro na abertura do arquivo");
        exit(2);
    }
    else
    {
        printf("\n Digite o nome : ");
        scanf("%s", name);

        printf("\n Digite o reclamação : ");
        scanf("%s", text);

        // usando fprint para armazenar a string no arquivo
        fprintf(pont_arq, "nome: %s \n", name);
        fprintf(pont_arq, "elogio: %s \n", &text);
        fprintf(pont_arq, "______________________________________________________________\n");

        //usando fclose para fechar o arquivo
        fclose(pont_arq);

        printf("\n Dados gravados com sucesso! \n");
    }
}

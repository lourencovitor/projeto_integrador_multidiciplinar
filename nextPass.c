#include "nextPass.h"


int nextPass()
{
    int option;
    printf("\n Digite 1 para cadastrar paciente \n ");
    printf("Digite 2 para cadastros de agendamentos \n ");
    printf("Digite 3 para cadastros de médicos \n ");
    printf("Digite 4 para cadastros de funcionários \n ");
    printf("Digite 5 para reclamações \n ");
    printf("Digite 6 para elogios \n ");
    printf("Digite 7 para cancelamento de consultas \n ");
    printf("Digite 0 para sair do programa \n ");
    printf("\n Escolha o proximo passo: ");
    scanf("%d", &option);

    switch (option)
    {
     case 0:
        exit(2);
        break;

    case 1:
        registerPatient();
        nextPass();
        break;

    case 2:
        registerScheduling();
        nextPass();
        break;

    case 3:
        registerMedical();
        nextPass();
        break;

    case 4:
        registerOfficial();
        nextPass();
        break;

    case 5:
        registerClaims();
        nextPass();
        break;

    case 6:
        registerCompliments();
        nextPass();
        break;

    case 7:
        cancellation();
        nextPass();
        break;

    default:
        nextPass();
    }
}

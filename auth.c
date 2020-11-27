#include "auth.h"

int auth()
{
     char email[50], password[20], authEmail[50]="admin@admin.com", authPassword[20]="admin123";
     printf("\n Digite o email : ");
     scanf("%s", email);
     printf("\n Digite o senha : ");
     scanf("%s", password);
     if(strcmp(email, authEmail) == 0 && strcmp(password, authPassword) == 0)
     {
        printf("\n logado com sucesso! \n");
     }
     else
     {
        printf("\n usuario não encontrado! \n");
        exit(2);
     }
}

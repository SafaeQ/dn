#include <stdio.h>
#include <stdlib.h>

int main()
{
    char Nom[10];
    char Prenom[10];
    int Age;
    char Sexe;
    long Numero_de_telephone;

    printf("votre nom :");
    scanf("%s",&Nom);

    printf("votre prénom :");
    scanf("%s",&Prenom);

    printf("Age :");
    scanf("%d",&Age);

    printf("Sex :");
    scanf(" %c",&Sexe);

    printf("numero de telephone : ");
    scanf("%ld",&Numero_de_telephone);

    printf("le nom est: %s,le prenom: %s",Nom,Prenom);
    return 0;
}

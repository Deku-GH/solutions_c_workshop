#include <stdio.h>


int main(){

    char name[20] ;
    char prenom[20] ;
    int age ;
    char sexe[20];
    char adresse_email[200];

    printf ("give me  your name :\n");
    scanf("%s",name);

    printf("your firt name :\n ");
    scanf("%s",prenom);

    printf("how old are you :\n ");
    scanf("%d",&age);

    printf("male or femmle :\n");
    scanf("%s",sexe);

    printf("and i the ending your adresse emaile :\n ");
    scanf("%s",adresse_email);

    printf("%s %s %s %d %s", name, prenom, age, sexe, adresse_email);


    return 0;
}
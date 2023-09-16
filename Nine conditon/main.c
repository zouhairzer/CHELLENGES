#include <stdio.h>
#include <stdlib.h>

int main()
{
    char caract;

    printf("Ecrit un alpha : ");
    scanf("%c", &caract);
    if(caract == 'majuscule'){
        printf("majiscul");
    }
    return 0;
}

//Ecrire un programme C qui lit un caractère et détermine s'il fait partie des alphabets ou non.
//Et s'il l'est, dire en plus s’il est une minuscule ou une majuscule.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nomber;
    printf("Entree un nomber");
    scanf("%d", &nomber);
    if(nomber % 2 !=0){
    printf("%d est un nombre impair.", nomber);
    }else{
    printf("%d est un nombre pair.",nomber );
    }
    return 0;
}

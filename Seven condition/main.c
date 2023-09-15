#include <stdio.h>
#include <stdlib.h>

int main()
{
    char alpha ;
    printf("Entre alpha : ");

    scanf("%c", &alpha);

    if (alpha > 'A' && alpha < 'Z')
    printf("Alpha majuscule :%c", alpha );

    else {printf("A lpha non majuscule : %c", alpha); }


    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;

    printf("Entre la note :  ");
    scanf("%d", &a);

    if (a < 10 ){

        printf("RECAL");

    }

        else if ( a > 10 && a<=12){
                 printf("MENTION");

        }

    else if ( a > 12 && a<=14){
             printf("MENTION ASSEZ BIEN");

    }
    else if ( a > 14 && a<=16){
             printf("MENTION BIEN");

    }
    else if ( a > 16){
             printf("TRES BIEN");

    }


    return 0;
}

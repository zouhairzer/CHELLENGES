#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Entre un nombre : ");
    scanf("%d", &a);
    if(a == 0)
        printf("le nombre  = %d", a);
    else if ( a > 0)
        printf("le nombre %d est Positive ", a);
    else {
        printf("le nombre %d est Negative ", a);
    }

    return 0;
}

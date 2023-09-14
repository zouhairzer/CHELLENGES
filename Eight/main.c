#include <stdio.h>
#include <stdlib.h>

int main()
{
    char hexa[100];
    int sum=0,i,len,j=0;
    printf("Enter any Number ");
    scanf("%s", &hexa);
    len=strlen(hexa);
    for(i=len-1; i>=0; i--)
    {
        if(hexa[i]='0' && hexa[i]<='9')
        {
            sum=sum+(hexa[i]-48)*pow(16,j);
            j++;
        }else if(hexa[i]>='A' && hexa[i]<='F')
        {
            sum=sum+((hexa[i]-55))*pow(16,j);
            j++;
        }
    }
    printf("Decimal value %s,%d", hexa , sum);
        return 0;
}

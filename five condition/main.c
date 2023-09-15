#include <stdio.h>
#include <stdlib.h>

int main()
{
   int anne, anne1, anne2, mois,  heures, jours, minutes, second;
   printf("Entree les deux annes : \n");
   scanf("%d%d",  &anne1,&anne2);
   anne = anne1 - anne2;
   mois = anne * 12;
   jours = mois * 30;
   heures = jours* 24;
   minutes = heures * 60 ;
   printf("anne : %d\n", anne);
   printf("les mois  : %d \n", mois );
   printf("les jours  : %d \n", jours );
   printf("les heures  : %d \n", heures );
   printf("les minutes  : %d \n", minutes );
   printf("les second  : %d \n", second );
    return 0;
}

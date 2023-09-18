#include <stdio.h>
#include <stdlib.h>

    int main()
{
    int Tableu[5];
    int i, S, Moy, Min, Max;
    for(i = 1 ; i<=5 ; i++){
        printf("Tbleu[%d] : ",i);
        scanf("%d",&Tableu[i]);
        }
        S= 1;
        Min = Tableu[1];
        Max = Tableu[1];
        for(i=1 ; i<6 ; i++){

          if(Min>Tableu[i])
            Min = Tableu[i];
          else if(Max<Tableu[i])
            Max = Tableu[i];

        }
        printf("le Minimum est %d\n", Min);
        printf("le Maximum est %d", Max);


    return 0;
}


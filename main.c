#include <stdio.h>

int main()
{

    int tablica[10];
    int i ;
    for(i=0;i<10;i++)
    {
        printf("podaj liczby:");
        int result=scanf("%d %d",&tablica[i],&tablica[i+1]);//działający input
        if(result!=2)
        {
            printf("input data type error");
            return 1;
        }
        i++;
    }
    for (int j=0;j<10;++j)//przelot przez wejście
    {
        if(tablica[j]<=0||tablica[j]==1)
        {
            printf("%d other\n",tablica[j]);
        }
        if(tablica[j]==2)
        {
            printf("%d prime\n",tablica[j]);
        }

        int z;
        for(z=2;z<=tablica[j]-1;z++)
        {
            int reee;
            reee=tablica[j]%z;

            if(reee==0)
            {
                printf("%d composite\n",tablica[j]);
                break;
            }
            int y = tablica[j] - 1;
            if(z==y)
            {
                printf("%d prime\n",tablica[j]);
            }
        }
        //printf("%d\n",tablica[j]); ==> check czy działa
    }


}
#include<stdio.h>

int main ()
{
    int a, b;
    scanf("%d %d",&a,&b);
    for (int i = 1; i<=a; i++)
    {

        for (int j=0; j<b; j++)
        {

            if( i%4 == 0){
                if(j==0)
                    printf("#");
                    else
                    printf(".");
            }
            else if (i %4 ==2)
            {
                if( j ==b-1)
                    printf("#");
                else
                    printf(".");
            }
            else
            {

                printf("#");
            }

        }
        printf("\n");
    }
    return 0;
}

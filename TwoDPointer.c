#include<stdio.h>

int main()
{
    int A[3][3];
    int x,y;
    //A[x][y] = *(*(A+x)+y)
    for(x=0;x<3;x++)
    {
        for(y=0;y<3;y++)
        {
            printf("Enter number :");
            scanf("%d",&(*(*(A+x)+y)));
        }
    }

    for(x=0;x<3;x++)
    {
        for(y=0;y<3;y++)
        {
            printf("%5d",*(*(A+x)+y));
        }
        printf("\n");
    }
    return 0;
}
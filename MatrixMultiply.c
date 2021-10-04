/* Matrix Multiplication using pointer */
#include<stdio.h>
int main()
{
    int A[3][3], B[3][3],C[3][3],x,y,z;
    printf("Enter First Matrix\n");
    for(x=0;x<3;x++)
    {
        for(y=0;y<3;y++)
        {
            printf("Enter Number :");
            scanf("%d",&(*(*(A+x)+y)));
        }
    }
    printf("Enter Second Matrix\n");
    for(x=0;x<3;x++)
    {
        for(y=0;y<3;y++)
        {
            printf("Enter Number :");
            scanf("%d",&(*(*(B+x)+y)));
        }
    }

    for(x=0;x<3;x++)
    {
        for(y=0;y<3;y++)
        {
            C[x][y]=0;
            for(z=0;z<3;z++)
            {
                C[x][y] = C[x][y]+ A[x][z] * B[z][y];
            }
        }
    }

    printf("\nFirst Matrix \n");
    for(x=0;x<3;x++)
    {
        for(y=0;y<3;y++)
        {
            printf("%5d",(*(*(A+x)+y)));
        }
        printf("\n");
    }
    printf("\nSecond Matrix \n");
    for(x=0;x<3;x++)
    {
        for(y=0;y<3;y++)
        {
            printf("%5d",(*(*(B+x)+y)));
        }
        printf("\n");
    }

    printf("\nThird Matrix \n");
    for(x=0;x<3;x++)
    {
        for(y=0;y<3;y++)
        {
            printf("%5d",(*(*(C+x)+y)));
        }
        printf("\n");
    }


}
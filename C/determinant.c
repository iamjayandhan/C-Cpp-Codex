#include<stdio.h>
int main()
{
    int mat[3][3],det=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("Enter mat[%d][%d]: ",i,j);
            scanf("%d",&mat[i][j]);
        }
    }

    printf("\nMatrix is :\n");
    for (int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            printf("%-4d",mat[i][j]);
        printf("\n");
    }

    for(int i=0;i<3;i++)
        det = det + (mat[0][i]*(mat[1][(i+1)%3]*mat[2][(i+2)%3] - mat[1][(i+2)%3] * mat[2][(i+1)%3]));
    printf("\nDeterminant of the given matrix is : %d",det);
    return 0;
}
/// program to print lower elements in an matrix
#include<stdio.h>
void main()
{
    int m,i,j,sum=0;
    int a[20][20];
    printf("\t**********INPUT**********\n\n");
    printf("enter limit");
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\t**********OUTPUT**********\n\n");
    printf("The elements being summed of the lower triangular matrix are:");
    for (i=0;i<m;i++)
    {
        for(j=0;j<i;j++)
        {
            sum=sum+a[i][j];
            printf(" %d ",a[i][j]);
        }
        
    }

    printf("\nThe Sum of the lower triangular Matrix Elements are: %d",sum);
}

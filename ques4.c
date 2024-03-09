#include<stdio.h>
int findmaxinrow(int ar[][100], int r,int c);
int main()
{
    int a[100][100],r,c,i,j;
     printf("\n\t**********INPUT**********\n\n");
    printf ("Enter number of rows and columns\n");
    scanf("%d%d",&r,&c);
    printf("Enter elements\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     printf("\n\t**********OUPUT**********\n\n");
    printf("Entered matrix is\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    findmaxinrow(a,r,c);
    return 0;
}



int findmaxinrow(int a[][100],int r,int c)
{
    int i,j,max;
    max=a[0][0];
    for(i=0;i<r;i++)
    {
        max=a[i][0]
        for(j=0;j<c;j++)
        {
            if(a[i][j]>max)
            {
                max=a[i][j];
            }
        }
        printf("the maximum in the row %d is=%d\n",i+1,max);
    }
    return 0;
}

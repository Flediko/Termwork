#include<stdio.h>
void evenodd(int [100],int);
int main()
{
    int arr1[100];
    printf("\t**********INPUT**********\n\n");
    printf("enter the limit of the array");
    int s;
    scanf("%d",&s);
    for(int i=0;i<s;i++)
    {
        printf("enter the %d element of the array",i+1);
        scanf("%d",&arr1[i]);
    }
    evenodd(arr1,s);
    return 0;
}
void evenodd(int arr[100],int n)
{
    int arr1[100],arr2[100];
    int c=0,j=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            arr1[c]=arr[i];
            c++;
        }
        else if(arr[i]%2!=0)
        {
            arr2[j]=arr[i];
            j++;
        }
    }
    printf("\t**********INPUT**********\n\n");
    printf("odd array ");
    for(int i=0;i<j;i++)
    {
        printf("%d  ",arr2[i]);    
    }
    printf("\neven array  ");
    for(int i=0;i<c;i++)
    {
        printf("%d  ",arr1[i]);
    }
}

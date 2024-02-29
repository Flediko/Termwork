#include<stdio.h>
void evenodd(int [100],int);
int main()
{
    int arr1[100];
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
    int c=0,j;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            arr1[c]=arr[i];
            arr[i]=arr[i+1];
            c++;
        }
    }
    printf("odd array ");
    for(int i=0;i<n-c;i++)
    {
        printf("%d  ",arr[i]);    
    }
    printf("\neven array  ");
    for(int i=0;arr1[i]!=0;i++)
    {
        printf("%d  ",arr1[i]);
    }
}

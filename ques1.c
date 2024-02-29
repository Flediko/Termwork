#include<stdio.h>
void count(int [100],int);
int main()
{
    int arr[100];
    int a;
    printf("enter the limit of elements in the array\n");
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        printf("element no. %d  ",i+1);
        scanf("%d",&arr[i]);
    }
    count(arr,a);
    return 0;
}
void count(int arr[100],int n)
{
    int i,j;
    printf("the unique elements are:");
    for(i=0;i<n;i++)
    {
        int c=0;
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(arr[i]==arr[j])
                    c+=1;
            }
        }
        if(c==0)
        {
            printf("%d ",arr[i]);
        }
    }
    
}

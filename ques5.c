#include<stdio.h>
#include<string.h>
void splitstring(char[]);
void main()
{
    char str1[100];
    printf("Enter a string\n");
    fgets(str1,sizeof(str1),stdin);
    splitstring(str1);
}

void splitstring(char str1[])
{
    int len1,i;
    len1=strlen(str1);
    for(i=0;i<len1-1;i++)
    {
        if(str1[i]==' ')
        {
            str1[i]='\n';
        }
    }
    printf("Modified string\n");
    puts(str1);
}

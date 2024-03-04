#include <stdio.h>
#include <string.h>
void alpha(char []);
int main()
{
    char str[100];
    printf("enter the string\n");
    fgets(str,100,stdin);
    alpha(str);
    puts(str);
    return 0;
}
void alpha(char str[])
{
    int j=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if ((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
          str[j++] = str[i];   
        }
    }
    str[j]='\0';
}

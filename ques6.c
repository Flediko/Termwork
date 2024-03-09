#include<stdio.h>
#include<string.h>
void freq(char []);
int main()
{
  char str[100];
  printf("\t**********INPUT**********\n\n");
  printf("enter the string");
  fgets(str,100,stdin);
  freq(str);
  return 0;
}
void freq(char str[])
{
  int temp=0,l;
  for(int i=0;str[i]!='\n';i++)
  {
    int c=-1;
    for(int j=0;str[j]!='\n';j++)
      {
        if (str[j]!=' ')
        {
         if(str[i]==str[j])
        {
          c++;
        }
        if(c>0)
        { 
          if(c>temp)
          {
              temp=c;
              l=i;
          }
        }   
        }
      }
  }
  printf("\n\t**********OUPUT**********\n\n");
  printf("the most elemnet with the most frequency is %c and its frequnecy is %d",str[l],temp+1);
}

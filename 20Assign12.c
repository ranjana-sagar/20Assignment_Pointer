#include<stdio.h>
#include<string.h>
char* extract(char*str,int st,int end,char* str1);
int main()
{
    char str[]="hello ranjana sagar",str1[50];
    printf("%s",extract(str,6,18,str1));
    return 0;
}
char* extract(char*str,int st,int end,char* str1)
{
    int i,l=strlen(str),j=0;
    for(i=st,j=0;i<end&&end<l;i++,j++)
      str1[j]=str[i];
    str[j]='\0';
    return str1;  
}
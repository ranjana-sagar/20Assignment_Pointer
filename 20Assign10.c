#include<stdio.h>
#include<string.h>
char* reverse(char*p);
int main()
{
    char str[100];
    printf("Enter your string:\n");
    fgets(str,100,stdin);
    if(str[strlen(str)-1]=='\n')
       str[strlen(str)-1]='\0';
    printf("%s",reverse(str));
    return 0;
}
char* reverse(char*p)
{
    int i,l=strlen(p);
    char x=0;
    for(i=0;i<l/2;i++)
    {
        x=*(p+i);
        *(p+i)=*(p+l-1-i);
        *(p+l-1-i)=x;
    }
    return p;
}
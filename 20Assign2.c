#include<stdio.h>
#include<string.h>
void swap(char*p,char*q);
void swap2(char**p,char**q);
int main()
{
    char str[50]="hello ranjaa";
    char str2[50]="how are you today";
    char *s1="hello baby";
    char*s2="what are you doing here";
    swap(str,str2);
    swap2(&s1,&s2);
    printf("%s %s\n",str,str2);
    printf("%s %s",s1,s2);
    return 0;
}
void swap(char*p,char*q)
{
    char str[50]={0};
    strcpy(str,p),strcpy(p,q),strcpy(q,str);
}
void swap2(char**p,char**q)
{
    char *t=*p;
    *p=*q,*q=t;
}    
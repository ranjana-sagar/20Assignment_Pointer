#include<stdio.h>
#include<string.h>
int main()
{
    int a=67,b=68;
    swap(&a,&b);
    printf("a=%d, b=%d",a,b);
    return 0;
}
void swap(int*p,int*q)
{
    int t=*p;
    *p=*q,*q=t;
}
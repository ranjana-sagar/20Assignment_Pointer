#include<stdio.h>
#include<string.h>
int main()
{
    int x=10,*p,**q,***r;
    p=&x,q=&p,r=&q;
    printf("%d %d %d %d\n",x,*p,**q,***r);
    printf("%d %d %d %d\n",&x,p,*q,**r);
    printf("%d %d %d\n",&p,q,*r);
    printf("%d %d\n",&q,r);
    printf("%d\n",&r);

    
    int a,*pt=NULL;
    pt=&a;
    if(pt!=NULL)
    {
        printf("Enter a Number:\n");
        scanf("%d",pt);
        printf("%d",*pt);
    }
    return 0;
}
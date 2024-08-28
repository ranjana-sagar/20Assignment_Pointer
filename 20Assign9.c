#include<stdio.h>
#include<string.h>
void reverse(int*p,int size);
int main()
{
    int x[10]={2,3,9,7,52,7,25,9,10,11},i;
    reverse(x,10);
    for(i=0;i<10;i++)
       printf("%d ",x[i]);
    return 0;
}
void reverse(int*p,int size)
{
    int i,x=0;
    for(i=0;i<size/2;i++)
    {
        x=p[i];
        p[i]=*(p+size-1-i);
        *(p+size-1-i)=x;
    }
}
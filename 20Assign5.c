#include<stdio.h>
#include<string.h>
int Max_No(int*p,int*q);
int main()
{
    int x,y,M=0;
    printf("Enyter two number:\n");
    scanf("%d%d",&x,&y);
    M=Max_No(&x,&y);
    printf("Maximum No netween two number is %d",M);
    return 0;
}
int Max_No(int*p,int*q)
{
    if(*p>*q)
      return *p;
    return *q;  
}
#include<stdio.h>
#include<string.h>
int sum(int *p,int size);
int main()
{
    int x[10]={1,2,3,4,5,6,7,8,9,10};
    printf("Sum of total elements is %d",sum(x,10));
    return 0;
}
int sum(int *p,int size)
{
    int sum=0;
    for(int i=0;i<size;i++)
       sum+=*(p+i);
    return sum;   
}
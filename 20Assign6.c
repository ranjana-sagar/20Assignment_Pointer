#include<stdio.h>
#include<string.h>
int Sum(int*p,int size);
int main()
{
    int x[10]={10,20,30,40,50,60,70,80,90,100},sum=0;
    sum=Sum(x,10);
    printf("Sum of all elements is %d",sum);
    return 0;
}
int Sum(int*p,int size)
{
   int i,sum=0;
    for(i=0;i<size;i++)
      sum+=*(p+i);
    return sum;  
}

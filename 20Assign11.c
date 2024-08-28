#include<stdio.h>
#include<string.h>
void occurences(char*p,char ch,int*q);
int main()
{
    char str[]="hello ranjana sagar";
    int indeces[10]={0},i;
    occurences(str,'a',indeces);
    for(i=0;i<10;i++)
      printf("%d ",indeces[i]);
    return 0;
}
void occurences(char*p,char ch,int*q)
{
   int i,j;
   for(i=0,j=0;p[i];i++)
     if(ch==p[i])
       q[j]=i,j++; 
}
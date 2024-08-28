#include<stdio.h>
#include<string.h>
void sort(int*p,int size);
int main()
{
    int x[10]={67,8,34,8667,2,0,546,1,67,6};
    sort(x,10);
    for(int i=0;i<10;i++)
      printf("%d ",x[i]);
    return 0;
}
void sort(int*p,int size)
{
    int i,j,k=0;
    for(i=0;i<size-1;i++)
    {
      for(j=0;j<size-1-i;j++)
        if(*(p+j)>*(p+j+1))
          k=*(p+j),*(p+j)=*(p+j+1),*(p+j+1)=k;
    }      
}
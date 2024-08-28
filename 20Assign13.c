#include<stdio.h>
#include<string.h>
void merge(int*p,int sz1,int*q,int sz2,int*arr3);
int main()
{
   int x[10]={2,5,8,9,12,15,45,50,60,67};
   int x2[10]={45,67,89,93,100,123,312,567,570,600};
   int x3[20]={0};
   merge(x,10,x2,10,x3);
   for(int i=0;i<20;i++)
     printf("%d ",x3[i]);
   return 0;
}
void merge(int*p,int sz1,int*q,int sz2,int*arr3)
{
   int i,j,k;
   for(i=0,k=0,j=0;i<sz1&&j<sz2;k++)
   {
      if(p[i]<q[j])
        arr3[k]=p[i],i++;
      else
        arr3[k]=q[j],j++;  
   }
   if(i<sz1)
      for(i,k;i<sz1;i++,k++)
        arr3[k]=p[i];
    else if(j<sz2)
      for(j,k;j<sz2;j++,k++)
        arr3[k]=q[j];    
}
#include<stdio.h>
#include<string.h>
int Greater_Mark(int**p,int sz,int*size);
int main()
{
    int c1[5]={67,98,56,54,45};
    int c2[4]={62,11,29,92};
    int c3[3]={6,87,68};
    int c4[6]={78,98,67,8,9,5};
    int c5[7]={78,8,6,4,4,68,65};
    int sz[5]={5,4,3,6,7};
    int*p[5]={c1,c2,c3,c4,c5};
    printf("Greatest marks among all the students is %d",Greater_Mark(p,5,sz));
    return 0;
}
int Greater_Mark(int**p,int sz,int*size)
{
    int i,j=0,t=0,gtr=0;
    gtr=p[0][0];
    for(i=0;i<sz;i++)
    {
      for(j=1;j<size[i];j++)
        if(gtr<p[i][j])
           gtr=p[i][j];         
    }    
    return gtr;
}    
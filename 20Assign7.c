#include<stdio.h>
#include<string.h>
void count_vowel_consonent(char*p);
int main()
{
    char str[50]={0};
    printf("Enter your string here:_");
    fgets(str,50,stdin);
    count_vowel_consonent(str);
    return 0;
}
void count_vowel_consonent(char*p)
{
   int i,j,V=0,C=0;
   char vol[]="aeiouAEIOU";
   for(i=0;*(p+i);i++)
   {
      for(j=0;vol[j];j++)
        if(*(p+i)==vol[j])
        {
          V+=1;
          break;
        }
      if(vol[j]=='\0'&&((*(p+i)>='a'&&*(p+i)<='z')||(*(p+i)>='A'&&*(p+i)<='Z')))
        C+=1; 
   }
   printf("No of Vowels in \"%s\" is %d\n",p,V);
   printf("No of Consonent in \"%s\" is %d\n",p,C);
}
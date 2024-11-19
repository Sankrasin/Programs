#include<stdio.h>
#include<string.h>
void sort(char[]);
void main()
{
 int i,n1,n2,flag=0;  
 char ch1[10], ch2[10];
 printf("Enter the first string:");
 gets(ch1);
 printf("Enter the second string:");
 gets(ch2);
 n1=strlen(ch1);
 n2=strlen(ch2);
 if (n1!=n2)
 {
    printf("strings are not Anagram");
 }
 else
 {
  sort(ch1);
  sort(ch2);
  for(i=0;i<n1;i++)
  {
   if(ch1[i]!=ch2[i])
   {
    flag=1; 
    break; 
   }
  }
  if(flag==0)
  {
   printf("strings are anagram"); 
  }
  else
  {
   printf("strings are not anagram");  
  }
 } 
}
void sort(char ch[10])
{
  int i,j,n;
  char temp;
  n=strlen(ch);
  for(i=0;i<n;i++)
  {
   for(j=i+1;j<n;j++)
   {
    if(ch[i]>ch[j])
    {
     temp=ch[i];
     ch[i]=ch[j];
     ch[j]=temp;
    }
   }
  }  
}

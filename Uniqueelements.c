#include<stdio.h>
void main()
{
    int a[20],n,i,j,c=0,s=1;
    printf("Enter the limit of array");
    scanf("%d",&n);
    printf("Enter the values of array");
    for(i=0;i<n;i++)
    {
     scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
     for(j=i+1;j<n;j++)
     {
      if(a[i]==a[j])
      {
       c=1; 
      }
      else
      {
       s=1; 
      }
     }
     if(c!=1)
     {
     printf("%d is a unique element",a[i]);
     }
    }
} 

#include<stdio.h>
int armstrong(int);
void main()
{
 int n,x;
 printf("Enter a number to be checked ");
 scanf("%d",&n);
 x=armstrong(n);
 if(x==n)
 {
  printf("Number is Armstrong");
 }
 else
 {
  printf("Number is not Armstrong");
 } 
}
int armstrong(int y)
{
    int r,i,s=0;
    for(i=y;i>=0;i/=10)
    {
     r=i%10;
     s=s+(r*r*r);
    }
    return s;
}

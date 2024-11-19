#include<stdio.h>
void main()
{
    int rev,n,t;
    printf("enter number");
    scanf("%d",&n);
    t=n;
    rev=0;
    while(t!=0)
    {
        rev*=10;
        rev=rev+t%10;
        t/=10;
    }    
    printf("reversed number is %d",rev);
    if(n==rev)
    {
      printf("\nits palindrome");
    }
    else
    {
        printf("\nnot palindrome");
    }
}


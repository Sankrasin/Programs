#include<stdio.h>
void main ()
{
    int h1,h2,m1,m2,s1,s2,h,m,s,x;
    printf("enter the time 1 and time 2");
    scanf("%d%d%d%d%d%d",&h1,&m1,&s1,&h2,&m2,&s2);
        x=(h1*3600)+(h2*3600)+(m1*60)+(m2*60)+s1+s2;
        h=x/3600;
        s=x%3600;
        m=s/60;
        s=s%60;
        printf("the time is %d %d %d",h,m,s);
}        

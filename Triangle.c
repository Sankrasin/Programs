#include<stdio.h>
void main ()
{
    float a,b,c;
    printf("enter the sides");
    scanf("%f%f%f",&a,&b,&c);
    if((a<(b+c))&&(b<(a+c))&&(c<(a+b)))
    {
        printf("possible triangle");      
    }
    else
    {
        printf("not possible triangle");
    }
}
 

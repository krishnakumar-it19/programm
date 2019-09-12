#include<stdio.h>

void main()
{

int a=0,sum=1;

printf("enter a factorial number\n");
scanf("%d",&a);

for(int i=1;i<=a;i++)
{
 sum=sum*i;
}

printf("factorila value of %d is %d",a,sum);

}


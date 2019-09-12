#include<stdio.h>

void main()
{
  int a[10];
int n=0;
printf("\n\nenter 10 numbers\n");

for(int i=0;i<10;i++)
{
scanf("%d",&a[i]);
}

for(int i=0;i<10;i++)
{
   if(a[i]>n)
{
  n=a[i];
}
 }

for(int i=0;i<=n;i++)
{
 for(int j=0;j<10;j++)
{
   if(i==a[j])
  {
  printf(" %d",i); 
 
  }
}
}




}






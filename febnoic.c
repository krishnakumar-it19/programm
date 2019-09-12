#include<stdio.h>

void main()
{
  int a=1,b=0,c=0;

int n=0;

printf("\n\nENTER A NUMBER OF TERMS\n");
scanf("%d",&n);

for(int i=0;i<n;i++)
{
  printf("\n%d",c);
  c=c+a;
a=b;
b=c;
}

}
  

#include<stdio.h>

void main()
{
  int a[3];
int o=0;


printf("enter a numbers\n");

   for(int i=0;i<3;i++)
{
  scanf("%d",&a[i]);
}


for(int i=0;i<3;i++)
{
 if(a[i]>o)
  {
   o=a[i];
   }
}

printf("\ngreatest among 3 numbers %d",o);

}

#include <stdio.h>
#include <conio.h>
 
int main()
{
    int i;
   for(i=5;i>0;i--)
   {
       for(int k=5;k>=i;k--)
       {
           printf("  ");
       }
       
       for(int j=1;j<=i;j++)
       {
           printf(" *");
       }
       printf("\n");
   }
   getch();
   return 0;
}

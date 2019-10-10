#include <stdio.h>
int main() {
    int a[5],max=0,temp=0;
    
    printf("ENTER FIVE VALUES\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
        
    }
    
    for(int i=0;i<5;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    
   printf("small to big numbers::");
    
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
               a[i]=a[j];
               a[j]=temp;
               
            }
        }
    }
    
    for(int i=0;i<5;i++)
    {
        printf(" %d",a[i]);
        
    }
    return 0;
}

#include<stdio.h>

int main()
{
    int x,y,n,i,j;
    
    printf("Enter  x ,y & n :");
    scanf("%d %d %d",&x,&y,&n);
   {
    for(i=1; i<=n; i++)
     {
       for(j=x; j<=y; j++)
       printf("%d × %d = %d \t",j,i,j*i);
     }
    printf("\n");
   
   }
    return 0;
}
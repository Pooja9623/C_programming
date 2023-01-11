#include<stdio.h>

int main()
{

    int n,i,j,k,l,d;
    
    printf("Enter n:");
    scanf("%d",&n);
    for(i=n; i>=1; i--)
    { 
       k=0;
        for(j=1,d=1; j<=n; j++)
        
        { k+=5;
        if(j%2!=0)
          {printf("%3d",k);
             
          }
          else
           {l=i+d;
            printf("%3d",l);
            l+=n;
           }
        
        }
        printf("\n");
    }


    return 0;
}
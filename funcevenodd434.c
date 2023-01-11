#include<stdio.h>

int is_even(int n)
{
    return n%2==0;

}


int main()
{

    int no,n,i;
    
    printf("Enter no. of elements n:");
    scanf("%d",&n);
    
    for(i=1; i<=n; i++)
    {
      printf("Enter elements %d ",i);
      scanf("%d",&no);
       if(is_even(no))
        printf("%d is even.\n",no);
    
      else
        printf("%d is odd.\n",no);
    }
    return 0;
}
#include <stdio.h>
int main() 
{
    int n,f,i;
    printf("Enter the Number:");
    scanf("%d",&n);
    for (i=1,f=0;i<=n;i++) 
	{
        if(n%i==0) 
		{
            f++;
        }
    }
    if(f==2) 
	{
        printf("%d is a prime number\n", n);
    } 
	    else 
	{
        printf("%d is not a prime number\n", n);
    }
    return 0;
}


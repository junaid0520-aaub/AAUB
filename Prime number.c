#include <stdio.h>
int main()
{
    int n,l,i;
    printf("Enter a positive number : ");
    scanf("%d", &n);

    if(n<=0)
    {
        printf("Invalid number");
        goto A;
    }

    else if(n==2)
    {
        printf("The number is prime.");
        goto A;
    }

    for(i=2;i<n;i++)
    {
        l=n%i;
        if(l==0)
        {break;}

        else
        {continue;}
    }
    if(l==0)
    {printf("The number is not prime.");}

    else
    {printf("The number is prime.");}

   A: return 0;
}

#include <stdio.h>
#include <math.h>
int main()
{
    int i ,n ,x , r=0,sum;
    printf("Enter how many numbers: ");
    scanf("%d", &n);

    float a[n],avg,sd;

    printf("Enter the numbers: \n");
    for (i = 0; i < n; i++)
    {
        printf("a[%d]= ", i + 1);
        scanf("%f", &a[i]);
        r = r + a[i];
    }

    avg = r / n;

    for (i = 0; i < n; i++)
    {
        x = a[i] - avg;
        a[i] = pow(x, 2);
        sum =sum + a[i];
    }

    sd = sqrt(sum);
    printf("Standard deviation: %.3f\n", sd);

    return 0;
}

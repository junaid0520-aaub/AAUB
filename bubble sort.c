#include<stdio.h>
int main()
{
  int a[100],n,i,j,l;

  printf("Enter the number of number you want : ");
  scanf("%d",&n);

  for(i=0;i<n;i++)
  {
    printf("Enter %dth number : ",i+1);
    scanf("%d",&a[i]);
  }

  printf("The numbers are : \n");
  for(i=0;i<n;i++)
  {
    printf(" %d ",a[i]);
  }

  printf(" \n ");

  for(i=0;i<n;i++)
  {
    for(j=0;j<n-i-1;j++)
    {
      if(a[j]<a[j+1])
      {
        l=a[j];
        a[j]=a[j+1];
        a[j+1]=l;
      }
      else continue;
    }
  }

  printf("The sorted numbers are : \n");
  for(i=0;i<n;i++)
  {
    printf(" %d ",a[i]);
  }
  return 0;

}


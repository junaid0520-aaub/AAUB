#include<stdio.h>
int main()
{
  int a[100][100],i,j,r,c;

  printf("Enter the number of row : ");
  scanf("%d",&r);

  printf("Enter the number of collum : ");
  scanf("%d",&c);

  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      printf("a[%d][%d] = ",i+1,j+1);
      scanf("%d",&a[i][j]);
    }
  }

  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      printf(" %d",a[i][j]);
    }
    printf("\n");
  }

    return 0;

}

#include<stdio.h>
int main()
{
  int a,b,ans;
  char m;

  printf("Select mathematical term : ");
  scanf("%c",&m);

  printf("Enter the larger number : ");
  scanf("%d",&a);

  printf("Enter the smaller number : ");
  scanf("%d",&b);

  if(m=='+')
  {ans = a + b;}

  if(m=='-')
  {ans = a - b;}

  if(m=='*')
  {ans = a * b;}

  if(m=='/')
  {ans = a / b;}

  printf("Ans is %d",ans);

  return 0;

}

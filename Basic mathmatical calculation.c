#include<stdio.h>
int main()
{
  int a,b,sum,sub,m,d,r;

  printf{"Enter the first number which is larger : "};
  scanf{"%d",&a};

  printf{"Enter the second number which is smaller : "};
  scanf{"%d",&b};

  sum = a+b;

  sub = a-b;

  m = a*b;

  d = a/b;

  r = a%b;

  printf{"Sum is %d, substraction is %d, multiplication is %d, deviation is %d, reminder is %d",sum,sub,m,d,r};

  return 0;

}

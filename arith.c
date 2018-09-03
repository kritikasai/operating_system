#include<stdio.h>
int add(int, int);
int sub(int, int);
int main()
{
  int a, b, sum, subt;
  a=10;b=20;
  sum=add(a,b);
  subt=sub(b,a);
  printf("Sum of %d and %d = %d\n", a, b, sum);
  printf("difference of %d and %d = %d",b,a,subt);
  return 0;
}
int add(int x, int y)
{
  return x+y;
}
int sub(int x,int y)
{
return x-y;
}

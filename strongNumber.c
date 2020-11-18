#include<stdio.h>
int main()
{
  int n, temp, r, fact, sum=0;
  scanf("%d",&amp;n);
  temp=n;
  while(n>0)
  {
    r = n%10;
    fact = 1;
 
    for(i=r; i>=1; i--)
    {
      fact = fact*i;
    }
    sum = sum+fact;
    n = n/10;
  }
  n = temp;
  if(n == sum)
    printf("%d is a strong number.", n);
  else
    printf("%d is not a strong number.", n);
  return 0;
}

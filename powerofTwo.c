#include <stdio.h>

#define pow(n) n&(n-1)
int main()
{
 int val, res;
 printf("Enter a number to check for power of 2 : ");
 scanf("%d",&val);
 res = pow(val);
 if(res ==0)
  printf("power of 2\n");
 else
  printf("not a power\n");
 return 0;
}

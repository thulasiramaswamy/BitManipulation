#include <stdio.h>
#define turnoff(x)   x & (x-1)
main()
{
 int val;
 scanf("%d",&val);
 printf("latest val is: %d\n",turnoff(val));
 return 0;
}

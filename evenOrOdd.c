#include <stdio.h>

int main()
{
 int n;
 printf("enter the num to check even or odd \n");
 scanf("%d",&n);
 n = n & 1;
 if(n) printf("odd\n");
 else  printf("even\n");
 return 0;
}

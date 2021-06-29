#include <stdio.h>
#define xor(x,y)  (x | y) & (~x | ~y)
int main()
{
 int x, y;
 printf("Enter two number to perform XOR operation : ");
 scanf("%d %d", &x, &y);
 printf("res is %d\n",xor(x,y));
 return 0;
}

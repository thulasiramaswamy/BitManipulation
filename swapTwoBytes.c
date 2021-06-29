#include <stdio.h>
#define SWAP(x)  ((x & 0x00FF) << 8) | ((x & 0xFF00) >> 8)

int main()
{
 int i; 
 unsigned short int val;
 scanf("%x",&val);
 val = SWAP(val);
 printf("res = %x\n",val);
 printf("\n");
 return 0;
}

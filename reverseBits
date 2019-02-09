// C Program to print the reverse all the bits of a given number
// input - 10 (0000000000001010)
// output - 0101000000000000
#include <stdio.h>

int main()
{
 short int inputNo, m, n, i, j;
 printf("\nPlease enter a number to reverse all the bits of the number : ");
 scanf("%d",&inputNo);

  for( i = 0, j = 15 ; i < j ; i++, j--)
  {
  m = inputNo >> i & 1;
  n = inputNo >> j & 1;
  if(m != n)
   {
	inputNo = inputNo ^ 1<<i;
	inputNo = inputNo ^ 1<<j;
   }
  }
  for( i = 15 ; i >= 0 ; i--)
  {
   if(inputNo & (1<<i)) printf("1");
   else printf("0");
  }
 printf("\n");
 return 0;
}

// C Program to Decimal to Binary Conversion
#include <stdio.h>
int main(void)
{
int i, inpNo, K;
printf("Enter a Number to Convert Decimal into Binary - ");
scanf("%d", &inpNo);
for(i = 31 ; i >= 0; i--)
 {
  K = inpNo >> i;
  if( K & 1) printf("1");
  else printf("0");
 }	
return 0;
}

// C Program to count the set bits of a given number
#include <stdio.h>

int countSetBits(int N)
{
unsigned int Cnt = 0;
while(N)
 {
  N = N & (N-1);
  Cnt++;
 }
 return Cnt;
}
int main(void)
{
 int inpNo;
 printf("Enter a number to print the count of set(1) bits : ");
 scanf("%d", &inpNo);
 printf("\nNumber of Set Bits in %d is : %d ",inpNo, countSetBits(inpNo));
 return 0;
}

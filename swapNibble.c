#include <stdio.h>
 
int swapNibbles(int x)
{
    return ( (x & 0x0F) << 4 | (x & 0xF0) >> 4 );
}
int main()
{
    int x = 100;
    printf("%d", swapNibbles(x));
    return 0;
}

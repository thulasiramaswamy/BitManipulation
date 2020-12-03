/* Check whether a number is divisible by 8 or not without actual division operation */
#include <stdio.h>

int main()
{
    int n = 24;
    if (((n >> 3) << 3) == n)
    {
        printf("Divisible by 8");
    }
    else
        printf(" Not divisible by 8");
    return 0;
}

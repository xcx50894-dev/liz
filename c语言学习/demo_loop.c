
#include <stdio.h>

int main(void)
{
    int i,sum =0;

    for (i = 1; i <= 100; i = i + 1)                     /* 下面那件事，做 3 遍 */
        printf("sum = %d\n", sum = sum + i);  /* sum = sum + i; */

    printf("sum : %d\n", sum);

    return 0;
}

/* demo_mod.c -- % 是什么：求"余数"
 * 注意：这里的 % 不是百分号，是"除以……剩下多少"
 */
#include <stdio.h>

int main(void)
{
    int i,sum=0;
    for (i = 1; i <= 100; i = i + 1)
    if (i % 2 == 1)  /* 如果 i 是奇数 */
        printf(" sum: %d\n",sum=sum+i);

    return 0;
}

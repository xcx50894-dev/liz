/* demo_even_if.c -- 同一个问题的【第二种做法】：每个数都走，到门口问一句
 * 对照 demo_mod.c（夏辰旭的做法：跳着走，只踩偶数）
 */
#include <stdio.h>

int main(void)
{
    int i, sum = 0;

    for (i = 1; i <= 100; i = i + 1)     /* 一个一个走，一个都不跳 */
    {
        if (i % 2 == 0)                  /* 到门口问：你是偶数吗？ */
            sum = sum + i;               /* 是才加 */
    }

    printf("偶数和 = %d\n", sum);

    return 0;
}

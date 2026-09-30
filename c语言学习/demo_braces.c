/* demo_braces.c -- 大括号到底管不管事？
 * 甲、乙两段代码只差一对大括号，跑出来不一样。
 * 下面 i 依次取 4（偶数）和 5（奇数），共跑 4 次，一次看清。
 */
#include <stdio.h>

int main(void)
{
    int i;

    /* ---------- 甲：没有大括号 ---------- */
    i = 4;                                      /* 偶数 */
    printf("甲, i=4(偶数): ");
    if (i % 2 == 1)
        printf("A ");
        printf("B");                            /* 这句在 if 外面！ */
    printf("\n");

    i = 5;                                      /* 奇数 */
    printf("甲, i=5(奇数): ");
    if (i % 2 == 1)
        printf("A ");
        printf("B");
    printf("\n");

    /* ---------- 乙：有大括号 ---------- */
    i = 4;
    printf("乙, i=4(偶数): ");
    if (i % 2 == 1)
    {
        printf("A ");
        printf("B");
    }
    printf("\n");

    i = 5;
    printf("乙, i=5(奇数): ");
    if (i % 2 == 1)
    {
        printf("A ");
        printf("B");
    }
    printf("\n");

    return 0;
}

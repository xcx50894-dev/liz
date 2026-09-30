/* struct_demo.c -- 三种基本结构的最小演示
 * 顺序：代码从上往下依次执行
 * 选择：if / else   满足条件走一条，否则走另一条
 * 循环：for         反复执行，直到条件不成立
 */
#include <stdio.h>

int main(void)
{
    int i;

    for (i = 1; i <= 5; i = i + 1)      /* 循环：i 从 1 数到 5 */
    {
        if (i % 2 == 0)                 /* 选择：i 能被 2 整除吗？ */
            printf("%d is even\n", i);  /* 能  -> 这行 */
        else
            printf("%d is odd\n", i);   /* 不能 -> 那行 */
    }

    return 0;
}

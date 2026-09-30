/* demo_choice.c -- 选择结构的最小例子
 * 前三行还是顺序；从 if 开始，程序第一次有了"分岔"。
 */
#include <stdio.h>

int main(void)
{
    int soft = 1;                        /* soft 是个盒子，先放个 1 进去 */

    printf("1. 撕开盖子\n");
    printf("2. 倒热水\n");
    printf("3. 等三分钟\n");

    if (soft == 0)                       /* 问：soft 里的数等于 1 吗？ */
        printf("4. 够软了，开吃\n");      /* 是   -> 走这条 */
}

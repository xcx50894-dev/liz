/* loop_kinds.c -- 当型循环 vs 直到型循环
 * 书上 p5 图1-3：两种循环的唯一区别是"先判断"还是"先执行"
 * 这里故意让条件一开始就不成立，把这个区别逼出来看
 */
#include <stdio.h>

int main(void)
{
    int i = 10;      /* 10 <= 5 是假的：条件从一开始就不成立 */

    printf("while (当型: 先判断后运行)\n");
    while (i <= 5)
    {
        printf("  ran with i = %d\n", i);
        i = i + 1;
    }
    printf("  -> nothing printed\n\n");

    i = 10;          /* 重新放回 10，再试另一种 */

    printf("do-while (直到型: 先运行后判断)\n");
    do
    {
        printf("  ran with i = %d\n", i);
        i = i + 1;
    } while (i <= 5);
    printf("  -> printed once\n");

    return 0;
}

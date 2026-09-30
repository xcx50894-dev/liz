/* 书 p7 【例1-2】求两个数的和并输出
 *
 * 〔补〕书里全文.md 上这一例的结尾印成 return 0'; ，然后就没有了 ——
 *       那个 ' 是噪声，真正的 } 丢了。这里补回来。
 */
#include <stdio.h>

int main(void)
{
    int a, b, sum;
    /*变量声明，3个变量的类型为int */

    a = 10;
    b = 20;
    sum = a + b;
    //求和

    printf("sum = %d\n", sum);
    return 0;
}

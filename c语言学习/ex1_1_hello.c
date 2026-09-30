/* 书 p6 【例1-1】输出 "Hello, the world!"
 *
 * 〔补〕书里全文.md 上这一例印成：
 *       int main(void)
 *       1                      <- 这个 1 是 OCR 把 { 认错了
 *       printf(...);
 *       return 0;
 *                              <- 结尾的 } 丢了
 *   ⇒ 这里把 { 和 } 补回来。代码一律以编译器为准。
 */
#include <stdio.h>

int main(void)
{
    printf("Hello, the world!\n");
    return 0;
}

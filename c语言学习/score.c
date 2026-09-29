#include <stdio.h>
int main(void)
{
    int a,b,c;
    printf("请输入你的成绩:\n");
    scanf("%d %d %d",&a,&b,&c);
    printf("你的平均成绩是：%.2f\n",(float)(a+b+c)/3);
    return 0;
}
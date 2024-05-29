#include <stdio.h>

/**
 * 题目描述：
 * 编写一个C程序，打印出9x9乘法表的一部分。
 * 程序应该使用两个嵌套的 for 循环来实现。外层循环控制乘法表的行数，从1到9；内层循环控制每行中的列数，列数应该等于当前的行数。
 * 在每个内层循环中，程序应该打印出当前列数和行数的乘积，并且每个乘积后面跟随一个制表符 \t 以保持格式整齐。
 * 每行结束后，程序应该打印一个换行符 \n 以开始新的一行。
 * 参考输出格式 printf("%d*%d=%d\t", j, i, i * j);
 */

int main() {
    int i, j;

    for (i = 1; i <= 9; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d*%d=%d\t", j, i, i * j);
        }
        printf("\n");
    }

    return 0;
}
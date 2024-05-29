#include <stdio.h>

/**
 * 给定100个人站成一圈，从第1个人开始依次报数。
 * 每数到3的人将会被淘汰，然后继续从下一个人开始报数。
 * 这个过程会一直持续，直到所有的人都被淘汰。
 * 请编写一个C语言程序来模拟这个过程，并且输出每一个被淘汰人的编号。
 * 要求：输出每一个被淘汰人的编号，每淘汰一个人输出一行，格式为："%d out \n"(每输出一次换行)
*/

#define ALL_NUM    	100 
#define COUNT_NUM	3
#define OUT_NUM		3

/* people id array such as (1,2,3,4,5,6) */
int people[ALL_NUM];

int main(void)
{
	int left = ALL_NUM;  // 剩余人数
    int pos = 0;         // 当前报数位置
    int step = 0;        // 当前报数

     // 初始化数组，表示每个人的位置，初始状态都未被淘汰
    for (int i = 0; i < ALL_NUM; i++) {
        people[i] = 1;  // 1表示未被淘汰
    }

    // 模拟报数和淘汰过程
    while (left > 0) {
      if (people[pos] == 1) {  // 当前位置的人员未被淘汰
           step++;  // 报数
           if (step == COUNT_NUM) {  // 如果报数到3
               people[pos] = 0;  // 淘汰该人
               left--;  // 剩余人数减少
               printf("%d out \n", pos + 1);  // 输出被淘汰的人的编号
               step = 0;  // 重置报数
            }
      }
      pos = (pos + 1) % ALL_NUM;  // 移动到下一个人，循环数组
    }
	return 0;
}
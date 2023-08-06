#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
//小游戏，电脑产生一个（1 - 100）的随机数，玩家来猜。

void menu()
{
	printf("---------------猜数字游戏---------------\n");
	printf("----------------------------------------\n");
	printf("-----------------1.Play-----------------\n");
	printf("-----------------0.Exit-----------------\n");
	printf("----------------------------------------\n");
	//设计游戏菜单
}
void game()
{	
	int input2 = 0;
	int i = 0;
	int rdm = rand()%100 + 1;		/*生成随机数的函数，函数返回一个在 0 和 RAND_MAX 的数字,最大是32767*/
	//任何数字 取模 100，得出余数肯定是0 到 99，再加上1 正好满足要求 1 到 100
	//生成一个随机数
	printf("猜猜数字是多少？\n");
	while (1)
	{
		scanf("%d", &input2);
		i++;
		if (input2 < rdm)
		{
			printf("这个数字有点小，再猜猜看\n\n");
		}
		else if (input2 > rdm)
		{
			printf("这个数字有点大，再猜猜看\n\n");
		}
		else
		{
			printf("恭喜你，猜了""%d""次，终于猜对了！\n\n", i);
			break;
		}
	}	
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	//srand 函数，格式为 srand( unsigned int a ),需要头文件为 #include <stdlib.h>
	//time函数,后面填指针， NULL 为空指针，就是 0 。需要头文件为 #include <time.h>
	//时间戳
	do
	{
		menu();
		printf("请选择(输入数字1 或 0) >>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();		//游戏的整个逻辑
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("只能输入数字 1 或 0 ！！！\n\n");
			Sleep(1000);
			break;
		}
	} while (input);
	return 0;
}
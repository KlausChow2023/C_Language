//C语言广泛应用于底层开发
//C / C++是编译型语言
//编辑器：只有编辑功能
//“.c”为后缀的文件叫“源文件”
//“.h”为后缀的文件叫“头文件”
//添加新项目的时候后缀应该为“.c”, 如果后缀是”.cpp”编译器会按照C++的语法来编译代码

#define _CRT_SECURE_NO_WARNINGS   //解决scanf返回值忽略的问题,只有VS编译器有这个问题
#include<stdio.h>
//stdio.h 是头文件，std代表 standard 标准，i代表 input 输入，o代表 output 输出
//int main()  
//int 代表：整型类型
//C语言代码中一定要有main函数，主函数
//C语言规定，main函数是函数的入口，有且只有一个
//{
//	printf("hello world\n");
//	//printf 是一个库函数，专门用来打印数据
//	return 0;
//}

//Ctrl + F5 快速运行代码


//数据类型
//char，字符型
//short，短整型
//int，整型
//long，长整型
//long long，更长的整型
//float，单精度浮点数
//double，双精度浮点数,精度更高

//每种类型的大小是多少？
//int main()
//{
//	printf("%d\n", sizeof(char));      输出 1
	//sizeof 测量多少字节，Byte
	//printf("%d\n", sizeof(short));     输出 2
	//printf("%d\n", sizeof(int));       输出 4
	//printf("%d\n", sizeof(long));      输出 4
	//C语言规定，只要sizeof(long) >= sizeof(int)就可以
	//printf("%d\n", sizeof(long long)); 输出 8
	//printf("%d\n", sizeof(float));     输出 4
	//printf("%d\n", sizeof(double));    输出 8
	//return;

//}

//计算机中的单位;
//8 Bit = 1 Byte
//1024 Byte = 1 Kb
//1024 Kb = 1 Mb
//1024 Mb = 1 Gb
//1024 Gb = 1 Tb
//1024 Tb = 1 Pb


//变量
// 变量分为：
//局部变量 - 在{ }内部定义的变量
//全局变量 - 在{ }外部定义的变量

//int a = 20; //全局变量
//int main()
//{
//	short age = 23;定义变量的方法
//	int a = 10; //局部变量
//	printf("a = %d\n",a);  输出 a = 10,因为在全局变量和局部变量名字相同的情况下，局部优先
//	建议全局变量和局部变量的名字不要相同
//	return 0;
//}

//计算两个整数的和
//scanf 是一个输入函数
//printf 是一个输出函数
//int main()
//{
//	int num1 = 0; //初始化
//	int num2 = 0; //初始化
//	//输入两个整数
//	scanf("%d %d", &num1, &num2);
//	//求和
//	int sum = num1 + num2;
//	//输出
//	printf("sum = %d\n", sum);
//	return 0;
//}
// 
// 变量的作用域：
// 局部变量的作用域是局部变量所在的局部范围
// 全局变量的作用域是整个工程
// 
// extern int a ,声明一个来自外部的符号
// 
// 变量的生命周期：
// 局部变量的生命周期是进入作用域生命周期开始，出作用域生命周期结束
// 全局变量的生命周期是整个程序的生命周期


//常量:
//字面常量
//const 修饰的常变量
//#define 定义的标识符常量
//枚举常量
//
//int main()
//{
//	30; 字面常量(整型)
//	8.6991; 字面常量(浮点型)
//	'a'; 字面常量(字符型)
//	const int b = 99; const 修饰的常变量 b 的值不能直接修改，具有常量属性但本质上还是变量
//
//
//	return 0;
//}

//#define MAX 100; #define 定义的标识符常量
//
//enum Color 
//{
//	枚举常量
//	RED,
//	GREEN,
//	BLUE
//};


//字符串
//int main()
//{
//	char ch = 's';  单个字符
//	C语言中没有字符串类型，类似 "sdfadgada" 由双引号引起来的一串字符称为字符串字面值
//	字符串的结束标志是一个 \0 的转义字符，在计算字符长度的时候 \0 是结束标志，不算字符内容
//	char arr[10] = "asfasdt";
//	strlen("abcde") 求字符串长度的一个函数
//	return 0;
//}


//转义字符:
//		\? 在书写连续多个问号时使用，防止他们被解析成三字母词(现在已经消失)
//		\' 用于表示字符常量`
//		\" 用于表示一个字符产内部的双引号
//		\\ 用于表示一个反斜杠，防止它被解释为一个转义序列符
//		\a 警告字符，蜂鸣
//		\b 退格符
//		\f 进纸符
//		\n 换行
//		\r 回车
//		\t 水平制表符
//		\v 垂直制表符
//		\ddd ddd表示1~3个八进制的数字。如：\130 表示 X
//		\xdd dd表示2个十六进制数字。如: \x30 表示 0

//		%d - 打印整型
//		%c - 打印字符
//		%s - 打印字符串
//		%f - 打印float类型
//		%lf - 打印double类型
//		%zu - 打印sizeof的返回值

//int main()
//{
//	printf("\a");
//	return 0;
//}

//			// C++ 风格的注释
//			/* */ C风格的注释


//选择语句
//int main()
//{
//	int input = 0;
//	printf("暑假开始\n");
//	printf("要好好提升自己吗(1/0)?");
//	scanf("%d", &input);
//	if (input == 1)
//	{
//		printf("好工作。");
//	}
//	else
//	{
//		printf("很惨。");
//	}
//	return 0;
//}
//
//循环语句
//C语言中有三种：while语句，for语句，do.....while语句
//while 循环例子：
//int main()
//{
//	int line = 0;
//	printf("开始学C语言\n");
//	while (line < 112)
//	{
//		printf("上网课:%d\n",line);
//		line++;
//	}
//	if (line == 112)
//	{
//		printf("精通C语言");
//	}
//	else
//	{
//		printf("继续学习");
//	}
//	return 0;
//}

//C语言是结构化的程序设计语言，有三种结构：顺序机构，选择结构，循环结构。
//
//
//函数，就是一个工厂，给我原材料我来加工，最后产出产品。
// 函数有输入和输出
//用函数求两个任意整数的和
//int Add(int x, int y)  Add为函数名，"x""y" 为函数参数，int为返回类型
//{  大括号里为函数体
//	int z = 0;
//	z = x + y;
//	return z;
//}  函数封装好后，可以多次重复调用
//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//	scanf("%d %d", &n1, &n2);
//	int sum = Add(n1, n2);  
//	//int sum = n1 + n2;
//	printf("和为%d",sum);
//
//	return 0;
//}


//数组
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };  
//	//arr是定义的数组，[]里每个元素都有序号，从0开始，叫做数组的下标。
//	//比如数组10个元素，第一个元素下标是"0"，第10个元素下标是"9"
//	printf("%d\n", arr[9]);	//打印数组里下标是9的元素
//	int i = 0;
//		while (i < 10)
//		{
//			printf("%d\n", arr[i]); 打印此数组的所有10个元素
//			i++;
//		}
//	return 0;
//}

//C语言广泛应用于底层开发
//C / C++是编译型语言
//编辑器：只有编辑功能
//“.c”为后缀的文件叫“源文件”
//“.h”为后缀的文件叫“头文件”
//添加新项目的时候后缀应该为“.c”, 如果后缀是”.cpp”编译器会按照C++的语法来编译代码

#define _CRT_SECURE_NO_WARNINGS   //解决scanf返回值忽略的问题,只有VS编译器有这个问题
#include<stdio.h>
//stdio.h 是头文件，std代表 standard 标准，i代表 input 输入，o代表 output 输出
//int main()  
//int 代表：整型类型
//C语言代码中一定要有main函数，主函数
//C语言规定，main函数是函数的入口，有且只有一个
//{
//	printf("hello world\n");
//	//printf 是一个库函数，专门用来打印数据
//	return 0;
//}

//Ctrl + F5 快速运行代码


//数据类型
//char，字符型
//short，短整型
//int，整型
//long，长整型
//long long，更长的整型
//float，单精度浮点数
//double，双精度浮点数,精度更高

//每种类型的大小是多少？
//int main()
//{
//	printf("%d\n", sizeof(char));      输出 1
	//sizeof 测量多少字节，Byte
	//printf("%d\n", sizeof(short));     输出 2
	//printf("%d\n", sizeof(int));       输出 4
	//printf("%d\n", sizeof(long));      输出 4
	//C语言规定，只要sizeof(long) >= sizeof(int)就可以
	//printf("%d\n", sizeof(long long)); 输出 8
	//printf("%d\n", sizeof(float));     输出 4
	//printf("%d\n", sizeof(double));    输出 8
	//return;

//}

//计算机中的单位;
//8 Bit = 1 Byte
//1024 Byte = 1 Kb
//1024 Kb = 1 Mb
//1024 Mb = 1 Gb
//1024 Gb = 1 Tb
//1024 Tb = 1 Pb


//变量
// 变量分为：
//局部变量 - 在{ }内部定义的变量
//全局变量 - 在{ }外部定义的变量

//int a = 20; //全局变量
//int main()
//{
//	short age = 23;定义变量的方法
//	int a = 10; //局部变量
//	printf("a = %d\n",a);  输出 a = 10,因为在全局变量和局部变量名字相同的情况下，局部优先
//	建议全局变量和局部变量的名字不要相同
//	return 0;
//}

//计算两个整数的和
//scanf 是一个输入函数
//printf 是一个输出函数
//int main()
//{
//	int num1 = 0; //初始化
//	int num2 = 0; //初始化
//	//输入两个整数
//	scanf("%d %d", &num1, &num2);
//	//求和
//	int sum = num1 + num2;
//	//输出
//	printf("sum = %d\n", sum);
//	return 0;
//}
// 
// 变量的作用域：
// 局部变量的作用域是局部变量所在的局部范围
// 全局变量的作用域是整个工程
// 
// extern int a ,声明一个来自外部的符号
// 
// 变量的生命周期：
// 局部变量的生命周期是进入作用域生命周期开始，出作用域生命周期结束
// 全局变量的生命周期是整个程序的生命周期


//常量:
//字面常量
//const 修饰的常变量
//#define 定义的标识符常量
//枚举常量
//
//int main()
//{
//	30; 字面常量(整型)
//	8.6991; 字面常量(浮点型)
//	'a'; 字面常量(字符型)
//	const int b = 99; const 修饰的常变量 b 的值不能直接修改，具有常量属性但本质上还是变量
//
//
//	return 0;
//}

//#define MAX 100; #define 定义的标识符常量
//
//enum Color 
//{
//	枚举常量
//	RED,
//	GREEN,
//	BLUE
//};


//字符串
//int main()
//{
//	char ch = 's';  单个字符
//	C语言中没有字符串类型，类似 "sdfadgada" 由双引号引起来的一串字符称为字符串字面值
//	字符串的结束标志是一个 \0 的转义字符，在计算字符长度的时候 \0 是结束标志，不算字符内容
//	char arr[10] = "asfasdt";
//	strlen("abcde") 求字符串长度的一个函数
//	return 0;
//}


//转义字符:
//		\? 在书写连续多个问号时使用，防止他们被解析成三字母词(现在已经消失)
//		\' 用于表示字符常量`
//		\" 用于表示一个字符产内部的双引号
//		\\ 用于表示一个反斜杠，防止它被解释为一个转义序列符
//		\a 警告字符，蜂鸣
//		\b 退格符
//		\f 进纸符
//		\n 换行
//		\r 回车
//		\t 水平制表符
//		\v 垂直制表符
//		\ddd ddd表示1~3个八进制的数字。如：\130 表示 X
//		\xdd dd表示2个十六进制数字。如: \x30 表示 0

//		%d - 打印整型
//		%c - 打印字符
//		%s - 打印字符串
//		%f - 打印float类型
//		%lf - 打印double类型
//		%zu - 打印sizeof的返回值

//int main()
//{
//	printf("\a");
//	return 0;
//}

//			// C++ 风格的注释
//			/* */ C风格的注释


//选择语句
//int main()
//{
//	int input = 0;
//	printf("暑假开始\n");
//	printf("要好好提升自己吗(1/0)?");
//	scanf("%d", &input);
//	if (input == 1)
//	{
//		printf("好工作。");
//	}
//	else
//	{
//		printf("很惨。");
//	}
//	return 0;
//}
//
//循环语句
//C语言中有三种：while语句，for语句，do.....while语句
//while 循环例子：
//int main()
//{
//	int line = 0;
//	printf("开始学C语言\n");
//	while (line < 112)
//	{
//		printf("上网课:%d\n",line);
//		line++;
//	}
//	if (line == 112)
//	{
//		printf("精通C语言");
//	}
//	else
//	{
//		printf("继续学习");
//	}
//	return 0;
//}

//C语言是结构化的程序设计语言，有三种结构：顺序机构，选择结构，循环结构。
//
//
//函数，就是一个工厂，给我原材料我来加工，最后产出产品。
// 函数有输入和输出
//用函数求两个任意整数的和
//int Add(int x, int y)  Add为函数名，"x""y" 为函数参数，int为返回类型
//{  大括号里为函数体
//	int z = 0;
//	z = x + y;
//	return z;
//}  函数封装好后，可以多次重复调用
//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//	scanf("%d %d", &n1, &n2);
//	int sum = Add(n1, n2);  
//	//int sum = n1 + n2;
//	printf("和为%d",sum);
//
//	return 0;
//}


//数组
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };  
//	//arr是定义的数组，[]里每个元素都有序号，从0开始，叫做数组的下标。
//	//比如数组10个元素，第一个元素下标是"0"，第10个元素下标是"9"
//	printf("%d\n", arr[9]);	//打印数组里下标是9的元素
//	int i = 0;
//		while (i < 10)
//		{
//			printf("%d\n", arr[i]); 打印此数组的所有10个元素
//			i++;
//		}
//	return 0;
//}

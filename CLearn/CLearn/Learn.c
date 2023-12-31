//C语言广泛应用于底层开发
//C / C++是编译型语言
//编辑器：只有编辑功能
//“.c”为后缀的文件叫“源文件”
//“.h”为后缀的文件叫“头文件”
//添加新项目的时候后缀应该为“.c”, 如果后缀是”.cpp”编译器会按照C++的语法来编译代码

#define _CRT_SECURE_NO_WARNINGS   //解决scanf返回值忽略的问题,只有VS编译器有这个问题
#include<stdio.h>
#include<string.h>
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


//课后作业 计算表达式（-8+22）* a - 10 + c / 2,其中 a = 40, c = 212
//int main()
//{
//	int a = 40;
//	int c = 212;
//	int e = 0;
//	e = a * (-8 + 22) - 10 + c / 2;
//	printf("%d\n", e);
//	return 0;
//}

//0 是数字0
//'0'是字符 0,ASCII值是48
//\0 是字符，ASCII值是0
//EOF 是 end of file，是文件的结束标志，值是-1

//下面代码的输出结果是：随机值
//int main()
//{
//	char arr[] = { 'b','i','t' }; 数组只有三个元素 [ b i t]
//  但是因为 arr 没有指定有多少个元素，所以 bit 后面还有很大的空间
//  但是如果 原数组变成 arr[a] 其中 a 只要大于3，strlen输出结果就会变成3。
//  这种是不完全初始化，数组剩余的部分默认初始化为 0
//	printf("%d\n", strlen(arr));
//	strlen 求字符串长度时候，数到\0就结束，但是 bit 后面的内容是随机的，不知道什么时候才会出现 \0
//	return 0;
//}
//数字 0 和 \0 没什么区别，因为ASCII值相同，都是0

//C99标准之前，数组的大小都是用常量或者常量表达式来指定
//例，int arr[5] = { 0 };
//	int arr2[2 + 3] = { 0 };
//	C99标准之后，支持了变长数组，这个时候允许数组的大小是变量，但是这种指定方式的数组是不能初始化的。 VS 对C99的支持不是很好
//例，int a = 5;
//	int arr3[a];  可以
//	int arr3[a] = { 0 }; 不可以，因为不能初始化

//用函数求两个数的最大值
//int Max(int x, int y)
//{
//	if(x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a,&b);
//	int c = Max(a, b);
//	printf("%d\n", c);
//	return 0;
//}


//int y(int x)
//{
//	if (x < 0)
//		return 1;
//	else if (x > 0)
//		return -1;
//	else
//		return 0;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int c = y(a);
//	printf("%d\n", c);
//	return 0;
//}


//操作符
//C语言提供非常丰富的操作符，使用灵活
//算术操作符：
//+ 加
//- 减
//* 乘
// / 除。 / 两端都是整数的时候，执行整数除法，例，7 / 2 = 3。两端有一端是浮点数的时候，执行浮点数除法，例，7 / 2.0 = 3.5
//% 取模。两端只能是整数，例，7 % 2 = 1
//
//移位操作符(涉及2进制运算)：
//<< 左移操作符
//>> 右移操作符
//
//位操作符：
//&
//^
//|
//
//赋值操作符：
//=
//+= 例，a += 3 等同于 a = a + 3
//-= 例，a -= 3 等同于 a = a - 3
//*= 例，a *= 3 等同于 a = a * 3
// /= 例，a /= 3 等同于 a = a / 3
//&=
//^=
//|=
//>>=
//<<=
//
//单目操作符：
//! 逻辑反操作
//- 负值
//+ 正值
//& 取地址
//sizeof 操作数的类型长度(以字节为单位)
//~ 对一个数的二进制按位取反
//-- 前置--，先--，后使用。例 b = --a 为， b = a; 后置--，先使用，后--。例 b = a-- 为 b = a, a = a - 1
//++ 前置++，先++，后使用。例 b = ++a 为， b = a; 后置++，先使用，后++。例 b = a++ 为 b = a, a = a + 1
//* 间接访问操作符(解引用操作符)
//(某种类型) 强制类型转换。例 int a = (int)3.14; 是把 3.14 强制转换成 int 类型

//关系操作符：
//>
//>=
//<
//<=
//!= 用于测试“不相等”
//== 用于测试“相等”，只有 == 才是判断相不相等， = 是赋值
//
//逻辑操作符：
//&& 逻辑与，就是并且，两边都为真才为真
//|| 逻辑或，就是或者，两边任意为真就为真，都为假则假

//条件操作符：
//exp1 ? exp2 : exp3 (是一个三目操作符)
//当 exp1 为真时，输出计算 exp2 的结果
//当 exp1 为假时，输出计算 exp3 的结果
//例，求 a 和 b 的较大值
//int a = 10;
//int b = 20;
//int c = a > b ? a : b;

//逗号表达式：
//exp1,exp2,exp3,....,expN
//用逗号隔开的一串表达式，从左向右依次计算，表达式的结果是最右边最后一个表达式的结果

//其它：
//[] 下标引用
//() 函数调用
//. 用法：结构体对象 . 成员名
//-> 用法：结构体指针变量 -> 成员名


//常见关键字：
// define 不是关键字，是一个预处理指令
//auto
//break
//case
//char
//const 常属性
//continue
//default
//do
//double
//else
//enum 枚举
//extern 声明外部符号
//float
//for
//goto
//if
//int
//long

//register 寄存器
//int main()
//{
//	register int num = 3; 建议把 3 存放在寄存器中
//	return 0;
//}

//return 函数返回值
//short
//signed 有符号的
//sizeof 计算大小

//static 静态的，放在静态区里
//1.修饰局部变量，例
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d\n", a);正常输出 10 个 2
//		//用 static 修饰 a 后，输出 2 3 4 5 6 7 8 9 10 11。
//		//因为 static 用来修饰局部变量时，局部变量出作用域也不销毁。
//		//影响了变量的生命周期，使变量的生命周期和程序一样，本质上是改变了变量的存储位置。
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
// 2.修饰全局变量时，全局变量的外部链接属性会变成内部链接属性。其他源文件(.c)就不能再使用这个全局变量。
//3.修饰函数时，函数的外部链接属性会变成内部链接属性。其他源文件(.c)就不能再使用这个全局变量。

//switch
//struct 结构体

//typedef 类型重命名
//例 typedef unsigned int unsi; 将 unsigned int 类型重命名为 unsi
//int main()
//{
//	unsigned int num = 0;
//	unsi num2 = 0;  这里 unsi = unsigned int	
//	return 0;
//}

//union 联合体(共用体)
//unsigned 无符号的
//void 无(一般会用在函数的返回类型，函数参数) 不需要返回
//volatile
//while

//#define 定义标识符常量
//例，#define NUM 100
//#define 定义宏(宏有参数)

//变量的命名规则：
//1.有意义，规范
//2.名字必须是字母、数字、下划线组成，不能有特殊字符且不能以数字开头
//3.不能是关键字

//计算机上的存储设备（按速度由高到低，空间由小到大排列）：
//寄存器(集成到CPU上)
//高速缓存(cache)
//内存
//硬盘


//指针：
//内存会划分为一个一个的内存单元(一个内存单元大小为一个字节：1 byte),每个内存单元都有编号。
// 内存单元-> 地址-> 地址也被称为指针，存放指针(地址)的变量就是指针变量
//例，
//int main()
//{
//	int a = 10;		/*这句代码的意思是向内存申请4个字节的空间来储存 10*/
//	&a;		/*取地址(取第一个字节的地址)操作符*/
//	printf("%p\n", &a);		/*其中%p是以地址格式打印数据*/
//	int* p = &a;	/*把&a存起来*/
//	//这个时候 p 叫做指针变量，它的类型是 int*
//	//其中'*'说明这个 p 是指针变量,int 说明 p 指向的对象是 int 类型
//	*p = 20;		//通过 p 中存放的地址，找到 p 所指向的对象。*p 就是 p 指向的对象，*p = a
//	//其中 * 为解引用操作符
//	printf("%d\n", a);
//	return 0;
//}
//不管是什么类型的指针，都是在创建指针变量，指针变量是用来存放地址的。
//指针变量的大小取决于一个地址存放的时候需要多大空间
//32位机器上的地址： 32 bit位  -  4 byte，所以指针变量的大小是4个字节(byte)
//64位机器上的地址： 64 bit位  -  8 byte，所以指针变量的大小是8个字节(byte)


//结构体：把一些单一类型组合在一起的方法
//struct Stu		/*定义一个结构体 Stu*/
//{
//	// { }里都是结构体的成员
//	char name[20];
//	int age;
//	char sex[10];
//	char tele[12];
//
//};
//int main()
//{
//	struct Stu s = { "ZhangSan", 20, "Male", "15534852647" };
//	printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);
//	//结构体对象访问里面的成员用 . 操作符，用法为：结构体对象 . 成员名
//	return 0;
//}

//作业，给定两个整数a和b，计算a除以b的整数商和余数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	scanf("%d %d", &a, &b);
//	c = a / b;
//	d = a % b;
//	printf("%d %d\n", c, d);
//	return 0;
//}


//C语言语句可分为五类：
//1.表达式语句
//2.函数调用语句
//3.控制语句，用于控制程序的执行流程，以实现程序的各种结构方式。
//	他们由特定的语句定义符组成，C语言有9种控制语句如下，
//	条件判断语句(分支语句)：if语句，switch语句
//	循环执行语句：do while语句，while语句，for语句
//	转向语句：break语句，goto语句，continue语句，return语句
//4.复合语句
//5.空语句

//分支语句：
// C语言中 0 表示假，非 0 表示真

//if 语句，例
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)	/*后面不能加分号;*/
//	{
//		printf("未成年");		
//		printf("不可以饮酒");		/*if 后面默认一条语句，如果多条语句要加上{ }*/
//	}
//	else if (age>=18 && age<=60)	/*多分支，可以插入多条 else if 语句*/
//	{
//		printf("成年");
//		printf("可以饮酒");
//	}
//	else
//	{
//		printf("老人");
//		printf("不可以饮酒");			/*else 后面默认一条语句，如果多条语句要加上{ }*/
//	}
//	return 0;
//}

//悬空else
//int  main()
//{
//	int a = 0;
//	int b = 2;
//	{
//		if (a == 1)
//			if (b == 2)
//				printf("1");
//		else		/*else只和离它最近的if匹配，与和谁对其没有关系*/
//			printf("2");
//	}	/*可以用{ }框起一段代码，称为代码块*/
//	return 0;
//}

//小技巧：
//在写( )内的判断语句时，把常量放在左面，比如
//	if(5 == a)
//	如果写成普通的 if (a == 5) 很可能因为粗心把 == 写成 =，导致代码变成if(a = 5)。
//	但是这样仍然可以运行，代码不会报错，可是代码此时不具备判断功能。
//	如果改成常量放在左面，if(5 = a)，这样是把变量赋给常量，代码会报错。可以提醒我们。

//小测验，输出 1 - 100之间的奇数
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (1 == i % 2)
//			printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}

//switch 语句，
//格式 
//switch (整型表达式)
//{
//case 整型常量表达式(也可以是字符，因为字符存储的是ASCII值，这个值就是整型):		
//  后面可以不加 break，也可以没有语句，代码会依次向下
//	语句;
//	break;		不加 break 语句会一直进行下去，达不到选择的目的

//  好习惯：
//		在每个 case 结尾加上 break，防止前面忘加了。
//		在每个 switch 语句后加上 default,处理其它情况。

//}
//例
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期一");
//		break;
//	case 2:
//		printf("星期二");
//		break;
//	case 3:
//		printf("星期三");
//		break;
//	case 4:
//		printf("星期四");
//		break;
//	case 5:
//		printf("星期五");
//		break;
//	case 6:
//		printf("星期六");
//		break;
//	case 7:
//		printf("星期日");
//		break;
//	default:	/*当所有 case 分支不能满足时，执行这一条*/
//		printf("输入错误");
//		break;
//	}
//	return 0;
//}

//小测验，判断下列代码输出结果
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)	/*switch允许嵌套使用*/
//		{
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m = %d n = %d\n", m, n);	/*输出m = 5, n = 3*/
//	return 0;
//}


//循环语句：

//1.while 语句格式
//	while (表达式)	/*表达式为真，就一直执行循环语句*/
//	循环语句;
//	当语句中有 break 的时候，直接终止整个循环(用于永久的终止循环)
//	continue 会跳过本次循环中其后面的代码，直接去判断部分，进行下一次循环的判断

//作业,输出 printf 函数调用后的返回值(就是 printf 打印的字符数)
//int main()
//{
//	int r =	printf("Hello World!");
//
//	printf("\n%d\n", r);
//	return 0;
//}

//作业，找出10个数中最大的数：
//int main()
//{
//	int arr[10] = {0};
//	int i = 0;
//	while (10 > i)
//	{
//		scanf("%d ", &arr[i]);
//		i++;
//	}
//	int Max = arr[9];
//	i = 0;
//	while (9 > i)
//	{
//		if (arr[i] > Max)
//		{
//			Max = arr[i];	
//		}
//		i++;
//	}
//	printf("\n%d", Max);
//	return 0;
//}

//作业，计算球的体积：
//int main()
//{
//	float r = 0.0f;		0.0默认是 double 类型的，所以要加上 f
//	float v = 0.0f;
//	scanf("%f", &r);
//	v =(4.0 * 3.1415926 * r * r * r)/3;
//	printf("%.3f", v);
//	return 0;
//}

//小贴士：
//定义变量的时候，一定要初始化。不可以直接 int a; 要写成 int a = 0;

//2.for 循环（最常用）
//语法形式
//for (表达式1(初始化部分); 表达式2(条件判断部分); 表达式3(调整部分))
//{
//	循环语句;
//}
//注意,不可以在 for 循环内部修改变量，防止其失去控制。

//一些 for 循环的变种，例
//	for( ; ; )		for 循环的判断部分省略意味着判断会恒成立，不建议这样用。
//for (x = 0, y = 0; x < 2 && y < 5; ++x, ++y);		多个变量控制循环也会成立

//3.do ... while 循环（循环体至少循环一次）
//语法，先来执行一次循环语句，然后看表达式判断是否重复
//do
//	{
//		循环语句;
//	}
//while (表达式);

//练习，计算 n 的阶乘：1*2*3*4*....*n
//int main()
//{
//	int n = 0;
//	int i = 1;
//	int ret = 1;
//	scanf("%d", &n);
//	while (i <= n)
//	{
//		ret = ret * i;
//		i++;
//	}
//	printf("%d\n", ret);
//	return 0;
//}

//写代码的过程：想办法(用编程思维) + 写代码(按照语法形式)

//练习，计算1！+2！+3！+....+10!
//int main()
//{
//	int ret = 1;
//	int n = 0;
//	int s = 0;
//	for (n = 1; n <= 10; n++)
//	{		
//		ret = ret * n;	
//		s = s + ret;
//	}	
//	printf("%d\n", s);
//	return 0;
//}

//strlen计算的是数组中 \0 之前的字符

//system("cls");		cls 作用是清空屏幕，使用时要在前面加上头文件：#include <stdlib.h>
//Sleep(毫秒数字);		作用是睡眠，延时多少毫秒，使用时要加头文件：#include <windos.h>

//练习，模拟用户登录，只能登陆三次。（密码正确提示登陆成，密码错误提示登录失败）
//int main()
//{
//	char arr1[] = { "asd123" };
//	char pw[10] = { 0 };
//	int i = 0;
//	for (i = 0;i < 3; i++)
//	{
//		printf("请输入密码>> ");	
//		scanf("%s", pw);		/*这里不能写成 &arr2 因为数组名本身就是地址*/
//		if (strcmp(pw, "asd123") == 0)		
//		/*比较两个字符串是否相等，不能用 == ，应该用库函数 strcmp,要加头文件 #include <string.h>
//		/*这里如果 strcmp 函数返回值是 0，则两个字符串相等*/
//		{
//			printf("密码输入正确，登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码输入错误，请重试\n");
//		}
//	}
//	if (3 == i)
//	{
//		printf("三次输入错误，登陆失败\n");
//	}
//	return 0;
//}

//goto 语句，可以跳转到指定位置（只能在同一个函数内跳转），可以随意滥用，理论上没必要用这个
//int main()
//{
//	again:		/*提前设定一个信标，again*/
//	printf("123123123\n");
//	printf("123123123\n");
//	goto again;		触发 goto 语句，跳转到信标again位置
//	return 0;
//}

//定时关机程序
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//tag:
//	printf("你的电脑将在一分钟后关机，请输入密码：123\n");
//	scanf("%s", input);
//	if (strcmp(input, "123") == 0)
//	{
//		system("shutdown -a");
//		printf("关机取消\n");
//	}
//	else
//	{
//		goto tag;
//	}
//	return 0;
//}

//如果想要开机自动运行程序，可以打开 服务 ，把进程设成 自动启动


//函数，分为 库函数 和 自定义函数。
//函数其实就是 子程序，负责完成某项特别任务，相较于其他代码具备相对的独立性，一般会有输入参数和返回值。
//C语言常用的 库函数：
//IO 函数
//字符串操作函数
//字符操作函数
//内存操作函数
//时间/日期函数
//数学函数
//其他库函数

//自定义函数
//ret_type fun_name(para1, *)
//{
//	statement;		/*语句项*/
//}
//其中，ret_type 是返回类型，fun_name 是函数名，para1 是函数参数

//练习，写一个函数，交换两个整型变量的内容
//void swap(int* px, int* py)
//{
//	int z = *px;
//	*px = *py;
//	*py = z;
//}
// 当实参传递给形参的时候，形参是实参的一份临时拷贝
// 对形参的修改不能改变实参，比如这里只是 x, y交换了，和 a,b没关系。
//int main()
//{
//	int a = 5;
//	int b = 3;
//	printf("%d,%d\n", a, b);
//	swap(&a, &b);
//	printf("%d,%d", a, b);
//
//}

//函数的参数，分为 实际参数 和 形式参数。
//实际参数是真实传递给函数的参数，比如常量、变量、表达式、函数。
//实际参数是真实传递给函数的参数，比如常量、变量、表达式、函数。 但是必须是一个确定的值

//函数调用的两种形式：传值调用，传址调用
//传值调用：函数的形参和实参分别占有不同内存块，对形参的修改不会影响实参
//传址调用：把函数外部创建变量的内存地址传递给函数参数的一种调用函数的方式。
//这种传参方式可以让函数和函数外的变量建立起真正的联系，也就是函数内部可以直接操作函数外部的变量。

//练习，写一个数可以判断一个数是不是素数
int mian()
{
	int a = 0;
	int b = 1;
	return 0;
}

add , commit,  push 
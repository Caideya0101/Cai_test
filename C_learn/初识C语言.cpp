#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>  //standard input output.head; 标准输入输出头文件。 
                   
#include<string.h> //使用strlen()函数时需要加此头文件。


 //变量

//void func()
//{
//	int a = 1;
//	a++;
//	printf("a=%d\n", a);
//	
//}

//int main()                                     //在C语言中，变量的定义要放在代码块的最前面，cpp(c plus plus 即c++)没有要求
//{    
//
////	void test();
////		{
////			int a = 1;
////			a++;
////			printf("a=%d\n", a);     //傻逼了，函数的声明与定义要写在主函数（main函数）外面；
////		}
//		
//		int i = 0;
//		
//		while (i < 5)
//		{
//			func();
//			i++;                   //这里输出的值会是多少呢？想一想局部变量的作用域。
//		}
//		return(0);
//}


//数据类型

//int main()
//{
//	printf("%d\n", sizeof(char));       //1 byte   char      字符型                printf():  print function 打印函数         
//	printf("%d\n", sizeof(short));      //2 byte   short     短整型                sizeof()函数：大小尺寸关于（）
//	printf("%d\n", sizeof(int));        //4 byte   int       整型                  "%d\n"表示打印整型数据, \n换行符。
//	printf("%d\n", sizeof(long));       //4 byte   long      长整型                "%c\n"表示打印字符型数据，
//	printf("%d\n", sizeof(long long));  //8 byte   long long 更长的整型            "%f\n"表示打印小数数据,
//	printf("%d\n", sizeof(float));      //4 byte   float     单精度浮点型          "%p\n"以地址的形式打印数据,
//	printf("%d\n", sizeof(double));     //8 byte   double    双精度浮点型          1byte=8bit,一字节等于八个比特位。比特位即一个二进制位。
//	return 0;	
//}


//常量

//int main()
//{
//	//1.字面常量
//	3;
//	4;
//	3.14;
//
//	//2.const修饰的常变量   这个变量具有常属性，不能被改变了。
//	const int num = 6;
//
//	//3.#define 定义的标识符常量
//#define MAX 10
//	 
//	//4.枚举常量
//	//枚举：一一列举
//	//枚举关键字-enum
//	enum Sex
//	{
//		MALE,
//		FEMALE,
//		SECRET    //这些为枚举常量。
//	};
//	return 0;
//}


//字符串

//int main()
//{
//     //由双引号括起来的一串字符叫字符串     打印字符串用"%s\n"。
//    "hello world\n";              //用数组把字符串存起来
//    char arr1[] = "abc";          //一串字符用双引号括起来
//    char arr2[] = { 'a','b','c', };//单个字符用单引号括起来
//    //这里arr1和arr2一样吗？
//    //"abc"--'a','b','c','\0'          '\0'是字符串的结束标志,不算字符串的内容，不算长度， 隐藏在字符串末尾，其值为0
//    printf("%s\n", arr1);         //a--97
//    printf("%s\n", arr2);         //A--65   ASCII码
//    printf("%d\n", strlen(arr1));   //=3  strlen-string length--计算字符串的长度
//    printf("%d\n", strlen(arr2));   //=15 (随机值，直到遇到随机值为0为止。)           
//    return 0;
//
//                                     
//}


// 转义字符 
//
////转义字符 转变原来的意思 转义字符占一个字符的长度。
//int main()
//{
//    printf("c:\test\32\test.c\n");                      //   \用来转义其他字符
//    printf("%d\n", strlen("c:\test\32\test.c"));        //  "\n"  换行符
//    //输出字符串的长度为13。                            //  "\t"  水平制表符
//                                                        //  "\v"  垂直制表符
//                                                        //  "\\"  代表一\个
//                                                        //   \32是两个八进制数字32转化为十进制后的数字作为ASCII码值所对应的字符
//    return 0;
//}                           
                               

//if else 选择语句。

//int main()
//{
//    int intput = 0;
//    printf("学习C语言\n");
//    printf("你要好好学习吗？（1/0)>:\n");
//    scanf("%d", &intput);
//
//    if (intput == 1)
//        printf("得到好offer\n");
//    else
//        printf("苦逼一个\n");
//  
//    int num1 = 10;
//    int num2 = 20;
//    int max = 0;
//    if (num1 > num2)
//        printf("较大值是：%d", num1);
//    else
//        printf("较大值是：%d", num2);
//
//
//    return 0;
//
//}


//三种循环语句   1，while循环语句  2，for循环语句   3，do while 循环语句。

//int main()
//{
//    int line = 0;
//    printf("学习C语言\n");
//    while (line < 20000)
//    {
//        printf("已经敲了%d行代码\n", line);
//        line++;
//    }
//    if (line >= 20000)
//    {
//        printf("得到一个好offer");
//    }
//    return 0;
//}


//函数   1,库函数  2，自定义函数。  两数求和以及比大小程序。以及宏的定义。

//int Add(int x, int y)
//{
//    int z = x + y;
//    return z;
//}
//
//
//int Max(int x,int y)
//{
//    if (x > y)
//        return x;
//    else
//        return y;
//
//}
//
////宏的定义。
//#define MAX(X,Y) (X>Y?X:Y)
//
//int main()
//{
//    int a, b, sum;
//    printf("请输入两个数：");
//    scanf("%d%d", &a, &b);
//    sum = Add(a, b);
//    printf("这两个数的和sum=%d\n", sum);
// 
//    int c, d, max, max1;
//    printf("请输入两个数：");
//    scanf("%d%d", &c, &d);
//    max = Max(c, d);
//    max1 = MAX(c, d);
//    printf("两个数的较大值为:%d\n", max);
//    printf("用宏定义的较大值为：%d\n", max1);
//    return 0;
//}


//数组

//int main()
//{
//    //int arr[12];//定义一个存放12个整数数字的数组。[]里面表示数组的大小，只能用常量来定义，不能用变量定义。
//    //char ch[20];
//    //float arr[5];
//    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };  //数组的第一个元素的下标为0。下标默认是从0开始。
//    printf("该数组里面的第五个数字为：%d\n", arr[4]);   //可以用下标的形式访问数组中的某一个元素,但下标是从0开始的。
//    
//    int i = 0;
//    printf("该数组为：\n");
//    while (i < 10)
//    {
//        
//        printf("%d  ", arr[i]);         //遍历数组的每一个元素。
//            i++;
//    }
// 
//    int a = 10;
//    int arr1[] = { 1,2,3,4,5,6 };
//    printf("%d\n", sizeof(a));         //  4  这里a两边的括号可以省略。
//    printf("%d\n", sizeof(int));       //  4
//    printf("%d\n", sizeof a);          //  4
//    printf("%d\n", sizeof(arr1));       //  6*4=24字节  计算数组的大小。单位是字节。
//    printf("%d\n", sizeof(arr1) / sizeof(arr1[0]));   // 24/4=6  计算数组元素的个数。
//
//
//    return 0;
//}


//操作符

//int main()
//{
//    int a = 0;         //只要是整数，其在内存中存储的都是二进制的补码，只不过整数的原码反码补码三码合一，所以重点注意负数是补码。
//    int b = ~a;       //  ~ 波浪号叫按（二进制）位取反。这里的b是有符号位的整型。
//    //  a=00000000000000000000000000000000         十进制整型0占4字节，4*8=32位（比特位)
//    //  b=11111111111111111111111111111111
//    //原码 反码 补码；  原码符号位不变，其它位按位取反得到反码，反码加1得到补码。
//    //b为负数，而负数在内存中存储的时候，存储的是二进制的补码。
//    //打印的时候打印的是这个数的原码。
//    //故要由补码求出原码：原码=补码减一，减一之后按位取反（符号位不变）。
//    //11111111111111111111111111111111
//    //11111111111111111111111111111110
//    //10000000000000000000000000000001  == -1
//    printf("%d\n", b);  //结果为-1.
//
//    //三目操作符。
//    int c, d, max;
//    printf("请输入两个整数\n");
//    scanf("%d%d", &c, &d);
//    max = (c > d ? c : d);                     //三目运算符
//    printf("最大值为: %d\n", max);
//
//    return 0;
//}


//指针

int main()
{
    int a = 10;    //4个字节。
    int* p = &a;   // &是取地址符。   p是一个指针变量，用来存放变量a这块内存的地址，它的类型是int*.
    printf("%p\n", &a);   //%p是打印地址。
    printf("%p\n", p);
    *p = 20;             //*-解引用操作符，表示这一地址下的内容。 
    printf("a=%d\n", a);

    return 0;
}


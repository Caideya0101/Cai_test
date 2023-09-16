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

//int main()
//{
//    int a = 10;    //4个字节。
//    int* p = &a;   // &是取地址符。   p是一个指针变量，用来存放变量a这块内存的地址，它的类型是int*.
//    printf("%p\n", &a);   //%p是打印地址。
//    printf("%p\n", p);
//    *p = 20;             //*-解引用操作符，表示这一地址下的内容。 
//    printf("a=%d\n", a);
//
//    return 0;
//}


//分支和循环

//C语言中，由一个分号隔开的就是一条语句。
//int main()
//{
    //int age = 20;
    //scanf("%d",&age);
    //if (age < 18)                 //if或者else后面要执行多条语句，则要加大括号。
    //    printf("未成年\n");
    ////else(18 <= age < 28) 
    //else if (age >= 18 && age < 28)
    //    printf("青少年\n");
    //else if (age >= 28 && age < 40)
    //    printf("中年\n");
    //else if (age >= 40 && age < 60)
    //    printf("壮年\n");
    //else if (age >= 60 && age <= 100)
    //    printf("老年\n");
    //else
    //    printf("老寿星\n");

    //C语言中 0表示假，非0表示真。


    //int a = 0;
    //int b = 2;
    //if (a == 1)
    //    if (b == 2)
    //        printf("hehe\n");
    //    else                         //else和距离最近的if进行匹配。而不是跟谁对齐就跟谁匹配。
    //        printf("hehe\n");


    //int a = 0;
    //int b = 2;
    //if (a == 1)
    //{
    //    if (b == 2)
    //        printf("hehe\n");
    //    else                         //else和距离最近的if进行匹配。而不是跟谁对齐就跟谁匹配。
    //        printf("hehe\n");
    //}                                //故If和else后面尽量加大括号。以防逻辑错误。
   // return 0;
//}


//判断一个数是否是奇数。
//
//int main()
//{
//    int num = 0;
//    scanf("%d", &num);
//    if (num % 2 == 1)
//    {
//        printf("这个数是奇数\n");
//    }
//    else
//    { 
//        printf("这个数是偶数\n");
//    }
//    return 0;
//}

//输出1到100之间的奇数

//int main()
//{    
//    int i = 1;
//    while (i < 100)
//    {
//        if (i % 2 == 1)
//            printf("%d  ", i);
//        i++;
//
//    }
//    printf("分割线\n");
//    int num = 1;
//    while (num < 100)
//    {
//        if (num % 2 == 1)
//            printf("%d  ", num);
//        num += 2;
//       
//    }
//
//  return 0;
//}


//switch多分支选择语句。

int main()
{/*
    switch (整型表达式)
    {
        case 整型常量表达式；
            语句；
            break;    表示从这里跳出
    }*/




    //switch后面整型表达式的值决定从哪个分支进入，而break决定从哪个分支跳出来。
    return 0;
}

//switch多分支选择语句。

//int main()
//{/*
//    switch (整型表达式)
//    {
//        case 整型常量表达式:
//            语句；
//            break;    表示从这里跳出
//    }*/
//
//    int day = 0;
//    printf("请输入0到8之间的数\n");
//    scanf("%d", &day);
//    switch (day)
//    {
//    case 1:
//        //printf("是星期一\n");
//        //break;
//    case 2:
//        //printf("是星期二\n");
//        //break;
//    case 3:
//        //printf("是星期三\n");
//        //break;
//    case 4:
//        //printf("是星期四\n");
//        //break;
//    case 5:
//        printf("是工作日\n");
//        break;
//    case 6:
//        //printf("是星期六\n");
//        //break;
//    case 7:
//        printf("是休息日\n");
//        break;
//        //switch后面整型表达式的值决定从哪个分支进入，而break决定从哪个分支跳出来。
//    default:
//        //除以上这些情况歪外。
//        printf("输入错误\n");
//            break;
//    }
//
//    
//    return 0;
//}


// while 循环。

//while循环里面的break和continue的作用。

//int main()
//{
//    //打印1-10数字
//    int i = 1;
//    while (i <= 10)
//    {
//        i++;                   //把i++放到这里之后程序的结果是2-11没有5。
//        if (5 == i)
//        {
//            //break;          //while循环里面遇到break，则终止整个循环。
//                          //虽然这里break是跟在if语句后面的，但是作用于while循环。
//            continue;        //while循环里面的continue的作用是跳过本次循环中continue后面的代码，直接执行下一次循环的判断。 
//                            //continue的结果是打印1234死循环。
//        }
//        printf("%d\n", i); 
//        //i++;               
//    }
//     
//
//
//    return 0;
//}


//getchar()与putchar()以及scanf()

//int main()
//{
    //int ch = getchar();     //从键盘上获取一个字符，并把这个字符的ASCII码值赋值给ch.  getchar(),获取字符函数，并且它的类型是int整型。
    //printf("%c\n", ch);
    //putchar(ch);            //打印字符函数，把从键盘上获取的字符打印出来。
    //EOF; //end of file  文件结束标志。按键为ctrl+z。它的值为（-1）。

    //int ch = 0;
    //while ((ch = getchar()) != EOF)         //  \n触发getchar()读取。
    //{
    //    putchar(ch);                        //putchar()打印的带换行，因为getchar()的时候按了回车。                       
    //}

    //举一个例子。
    // 假设密码是一个字符串。

    //char  password[20] = { 0 };
    //printf("请输入密码：>");
    //scanf("%s", password);
    //getchar();//读取了\n;   但假如输入的密码里面带有空格，则scanf只读取空格或者\n之前的字符串，剩下的依然在缓冲区中。
    //int ch = 0;
    //while ((ch = getchar()) != '\n')
    //{
    //    ;             //这里用while循环把\n以及\n之前的都从缓冲区读走了。
    //}
    //printf("请确认密码（Y/N）:>");
    //int ret = getchar();
    //if ('Y' == ret)     //字符用单引号。
    //{
    //    printf("Yes\n");
    //}
    //else
    //{
    //    printf("No\n");
    //}

    //程序的结果是打印请确认密码之后并没有等待我输入Y/N，而是直接打印No.
    //原因是因为在输入密码的时候密码结尾按了一个回车，而回车在scanf中的作用是确认我们把这个密码输入进去。scanf并不读取回车\n。
    //所以此时缓冲区里面还剩一个\n，就被gerchar拿走了，而\n不是Y，所以进入了if语句中的else从而打印了No。




    //return 0;
//}

//转换特定ASCII码为对应字符并输出，无需空格隔开。

//int main()
//{
//    int arr[] = { 73,32,99,97,110,32,100,111,32,105,116,33 };
//    int sz = sizeof(arr) / sizeof(arr[0]);   //需要遍历数组里面的元素是，用此公式计算数组长度。
//    int i = 0;
//    while (i < sz)
//    {
//        printf("%c", arr[i]);
//        i++;
//    }
//
//    return 0;
//}


 //  for循环。

//int main()
//{
    //int i = 1;//初始化
    //while (i <= 10)//判断
    //{
    //    printf("%d", i);
    //    i++;//调整

    //}

    /*for (表达式1；表达式2；表达式3)
    {
        循环语句；

    }
    表达式1：初始化部分
    表达式2：条件判断部分
    表达式3：调整部分
    */

    //int i = 1;
    //for (i = 1; i <= 10; i++)        // for循环的初始化部分，条件判断部分，调整部分，for后面的（）里面，容易控制循环
    //{                                //所以for循环是用的最多的。
    //    if (i == 5)
    //    {
    //        //break;                 //for循环里面的break：直接结束整个循环。
    //        continue;                //for循环里面的continue：跳过此次循环中的continue后面的代码，直接跳到调整部分。
    //                                 
    //    }
    //    
    //    printf("%d ", i);

    //}

//}

//一道笔试题  问一下循环循环几次。

//int main()
//{
//    int i = 0;
//    int k = 0;
//    for (i = 0, k = 0; k = 0; i++, k++)
//    {
//        k++;
//
//    }
//    return 0;
//}


// do while 循环

int main()
{/*
    do               //先do  上来就是干。
        循环语句；
    while（表达式）；*/
    int i = 0;
    do
    {
        printf("%d", i);
        i++;
    } while (i <= 10);


    return 0;
}
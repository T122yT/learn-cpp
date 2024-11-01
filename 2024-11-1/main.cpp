#include<iostream>
#include"add.h"

#define PRINT_JOE

//#define的作用范围仅在定义的此文件

//条件编译
//int main()
//{
//#ifdef PRINT_JOE
//	std::cout << "joe\n";//PRINT_JOE被定义，这一行就会编译
//#endif 
//
//#ifdef PRINT_BOB
//	std::cout << "bob\n";//没定义，不会编译
//#endif
//
//#ifndef PRINT_BOB
//	std::cout << "bob\n";//没定义，不会编译
//#endif
//
//#if 0//从这里开始不编译
//
//	//可以作为一种注释方法
//
//#endif//到这里结束
//
//	return 0;
//}


//void doSomething(); // 前向声明 doSomething()
//
//#define PRINT
//
//int main()
//{
//    doSomething();
//
//    return 0;
//}

//int add(int x, int y); // 前向声明函数原型
//
//int main()
//{
//    std::cout << "The sum of 3 and 4 is " << add(3, 4) << '\n';
//    return 0;
//}

/*
头文件标准：
始终使用头文件保护（将在下一课中介绍）。
不要在头文件中定义变量和函数（目前）。
为头文件提供与其关联的源文件相同的名称（例如，grades.h与grades.cpp成对出现）。
每个头文件都应该有一个特定的功能，并且尽可能独立。例如，将与功能A相关的声明放在A.h中，将与功能B相关的声明放在B.h中。如果只关心A，则可只包含A.h，而不获取与B相关的内容。
注意为代码文件中使用的功能显式包含对应的头文件。
头文件都应该能单独编译（应该#include需要的每个依赖项）。
仅#include 需要的内容（不要因为允许而include所有内容）。
不要#include .cpp文件。
在头文件中放置关于某段代码的作用或使用文档。它更可能在那里被看到。描述代码如何工作的文档应保留在源文件中。
*/

//#include "square.h"
//#include "wave.h"
//
//int main()
//{
//    return 0;
//}


int getUserInput()
{
    std::cout << "输入一个数字" << "\n";
    int input;
    std::cin >> input;

    return input;
}

int main()
{
    // 从用户处获取第一个数字
    int value{ getUserInput() };
    std::cout << value << "\n";

    // 从用户处获取数学运算符
//    getMathematicalOperation();

    // 从用户处获取第二个数字
//    getUserInput();

    // 计算结果
//    calculateResult();

    // 打印结果
//    printResult();

    return 0;
}


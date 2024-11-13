//#include <iostream>
//
//int main()
//{
//    std::cout << "Enter your age: ";
//    int age{};
//    std::cin >> age;
//
//    const int constAge{ age }; // 使用非常量的值初始化常变量
//
//    age = 5;      // ok: age 不是const, 所以可以改变值
//    //constAge = 6; // error: constAge 是 const, 不能改变值
//
//    return 0;
//}

//c ? x : y	表达式c的结果为true，计算x，否则计算y


//#include <iostream>
//
//int main()
//{
//    constexpr bool inBigClassroom{ false };
//    constexpr int classSize{ inBigClassroom ? 30 : 20 };
//    std::cout << "The class size is: " << classSize << '\n';
//
//    return 0;
//}


//#include <iostream>
//
//int main()
//{
//    int x{ 2 };
//    int y{ 1 };
//    int z{ 10 - x > y ? x : y };            // 先求值 2
//    std::cout << z;
//
//    return 0;
//}

////操作数类型保持一致
//#include <iostream>
//
//int main()
//{
//    std::cout << (true ? 1 : 2) << '\n';    // okay: 两个操作数的类型都是int
//
//    std::cout << (false ? 1 : 2.2) << '\n'; // okay: int  1 被转换为 double
//
//    std::cout << (true ? -1 : 2u) << '\n';  // 令人惊讶: -1 被转换为 unsigned int, 发生溢出 
//
//    return 0;
//}

//#include <iostream>
//
//constexpr int greater(int x, int y) // 是一个 constexpr 函数 可以在编译时计算，提高性能
//{
//    return (x > y ? x : y);
//}
//
//int main()
//{
//    constexpr int x{ 5 };
//    constexpr int y{ 6 };
//
//    // 稍后解释这里为啥使用变量
//    constexpr int g{ greater(x, y) }; // 编译时计算
//
//    std::cout << g << " is greater!\n";
//
//    return 0;
//}


//#include <iostream>
//#include <string>
//
//int main()
//{
//    std::cout << "Enter your full name: ";
//    std::string name{};
//    std::cin >> name; // 可能不一定按预期工作，因为std::cin读取到 空白字符，就会停止
//
//    std::cout << "Enter your favorite color: ";
//    std::string color{};
//    std::cin >> color;
//
//    std::cout << "Your name is " << name << " and your favorite color is " << color << '\n';
//
//    return 0;
//}

//#include <iostream>
//#include <string> // 引入 std::string 和 std::getline
//
//int main()
//{
//    std::cout << "Enter your full name: ";
//    std::string name{};
//    std::getline(std::cin >> std::ws, name); // 将一整行输入读取到 name
//
//    std::cout << "Enter your favorite color: ";
//    std::string color{};
//    std::getline(std::cin >> std::ws, color); // 将一整行输入读取到 color
//
//    std::cout << "Your name is " << name << " and your favorite color is " << color << '\n';
//
//    return 0;
//}

// 获取字符串长度
#include<iostream>
#include<string>

int main()
{
	std::string name{ "aLEX"};
	std::cout << name.length() << "\n";

	return 0;

}


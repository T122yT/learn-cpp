//// 2024-11-5.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
////
//
//#include <iostream>
//
//int main()
//{
//    std::cout << "Hello World!\n";
//}
//
//// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
//// 调试程序: F5 或调试 >“开始调试”菜单
//
//// 入门使用技巧: 
////   1. 使用解决方案资源管理器窗口添加/管理文件
////   2. 使用团队资源管理器窗口连接到源代码管理
////   3. 使用输出窗口查看生成输出和其他消息
////   4. 使用错误列表窗口查看错误
////   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
////   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件

//#include <iomanip> // 引入std::setw (可以指定输出数据的宽度)
//#include <iostream>
//
//int main()
//{
//    std::cout << std::left; // 左对齐
//    std::cout << std::setw(16) << "bool:" << sizeof(bool) << " bytes\n";
//    std::cout << std::setw(16) << "char:" << sizeof(char) << " bytes\n";
//    std::cout << std::setw(16) << "short:" << sizeof(short) << " bytes\n";
//    std::cout << std::setw(16) << "int:" << sizeof(int) << " bytes\n";
//    std::cout << std::setw(16) << "long:" << sizeof(long) << " bytes\n";
//    std::cout << std::setw(16) << "long long:" << sizeof(long long) << " bytes\n";
//    std::cout << std::setw(16) << "float:" << sizeof(float) << " bytes\n";
//    std::cout << std::setw(16) << "double:" << sizeof(double) << " bytes\n";
//    std::cout << std::setw(16) << "long double:" << sizeof(long double) << " bytes\n";
//
//    return 0;
//}

//无符号2字节最大存储65535， 超出部分重新计数 65536 = 0

//#include <iostream>
//
//int main()
//{
//    unsigned short x{ 65535 }; // 最大的16位无符号整数
//    std::cout << "x was: " << x << '\n';
//
//    x = 65536; // 65536 溢出, 所以重新取值
//    std::cout << "x is now: " << x << '\n';
//
//    x = 65537; // 65537 溢出, 所以重新取值
//    std::cout << "x is now: " << x << '\n';
//
//    return 0;
//}

//有符号整数和无符号整数混合计算时，有符号会转换成无符号

//#include <iostream>
//
//// int 是 4 字节
//int main()
//{
//	unsigned int u{ 2 };
//	signed int s{ 3 };
//
//	std::cout << u - s << '\n'; // 2 - 3 = 4294967295
//
//	return 0;
//}

//#include <cstdint> // 引入 固定宽度整数
//#include <iostream>
//
//int main()
//{
//	std::cout << "least 8:  " << sizeof(std::int_least8_t) * 8 << " bits\n";
//	std::cout << "least 16: " << sizeof(std::int_least16_t) * 8 << " bits\n";
//	std::cout << "least 32: " << sizeof(std::int_least32_t) * 8 << " bits\n";
//	std::cout << '\n';
//	std::cout << "fast 8:  " << sizeof(std::int_fast8_t) * 8 << " bits\n";
//	std::cout << "fast 16: " << sizeof(std::int_fast16_t) * 8 << " bits\n";
//	std::cout << "fast 32: " << sizeof(std::int_fast32_t) * 8 << " bits\n";
//
//	return 0;
//}

//#include <cstddef> // 引入 std::size_t
//#include <iostream>
//
//int main()
//{
//	std::cout << sizeof(std::size_t) << '\n';
//
//	return 0;
//}

//#include <iostream>
//
//int main()
//{
//	std::cout << 5.0 << '\n';
//	std::cout << 6.7f << '\n';
//	std::cout << 9876543.21 << '\n';
//
//	return 0;
//}

//#include <iostream>
//
//int main()
//{
//    char ch1{ 'a' };
//    std::cout << ch1; // 打印字符 'a'
//
//    char ch2{ 98 }; // 初始化为字符 'b' (不推荐)
//    std::cout << ch2; // 打印字符 'b'
//
//
//    return 0;
//}

//#include <iostream>
//
//int main()
//{
//    std::cout << "Input a keyboard character: "; // 假设此时用户输入 "abcd"
//
//    char ch{};
//    std::cin >> ch; // ch = 'a', "bcd" 被缓存起来
//    std::cout << "You entered: " << ch << '\n';
//
//    // 注: 下面的cin不需要用户再输入了, 读的是缓冲区的数据!
//    std::cin >> ch; // ch = 'b', "cd" 被缓存
//    std::cout << "You entered: " << ch << '\n';
//
//    return 0;
//}

//通过static_cast操作符进行显式类型转换

#include <iostream>

void print(int x)
{
	std::cout << x << '\n';
}

int main()
{
	print(static_cast<int>(5.5)); // 显示的将 double 值 5.5 转换为 int
	print(static_cast<int>(7.0));

	return 0;
}
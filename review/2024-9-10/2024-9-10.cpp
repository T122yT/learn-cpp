//#include <iostream>
//
//bool isEqual(int x, int y)
//{
//    return (x == y); // 操作符== ， x 等于y，返回true，否则返回false
//}
//
//int main()
//{
//    std::cout << "Enter an integer: ";
//    int x{};
//    std::cin >> x;
//
//    std::cout << "Enter another integer: ";
//    int y{};
//    std::cin >> y;
//
//    std::cout << std::boolalpha; // 以  true ， false 格式打印bool
//
//    std::cout << x << " and " << y << " are equal? ";
//    std::cout << isEqual(x, y) << '\n'; // isEqual返回true或false
//
//    return 0;
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

#include<iostream>

//int main()
//{
//	char ch{};
//	std::cin >> ch;
//	std::cout << ch;
//	return 0;
//}

//int main()
//{
//	std::cout << "123\n456\n";
//	std::cout << "980" << "\n" << "980";
//
//	return 0;
//}

#include <iostream>

void print(int x)
{
	std::cout << x << '\n';
}

int main()
{
	print(static_cast<int>(5.5)); // 显示的将 double 值 5.5 转换为 int

	return 0;
}
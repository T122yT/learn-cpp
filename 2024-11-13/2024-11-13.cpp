////#include <iostream>
////
////int getValue()
////{
////    std::cout << "Enter an integer: ";
////
////    int x{};
////    std::cin >> x;
////    return x;
////}
////
////int main()
////{
////    std::cout << getValue() + (getValue() * getValue()) << '\n'; // a + (b * c)
////    return 0;
////}
//
//#include <cassert> // for assert
//#include <cstdint> // for std::int64_t
//#include <iostream>
//
//// note: exp 必须是非负整数
//// note: 不执行越界检查
//constexpr std::int64_t powint(std::int64_t base, int exp)
//{
//	assert(exp >= 0 && "powint: exp parameter has negative value");
//
//	// 处理 base 为 0 的情况
//	if (base == 0)
//		return (exp == 0) ? 1 : 0;
//
//	std::int64_t result{ 1 };
//	while (exp > 0)
//	{
//		if (exp & 1)  // 如果exp 为奇数
//			result *= base;
//		exp /= 2;
//		base *= base;
//	}
//
//	return result;
//}
//
//int main()
//{
//	std::cout << powint(7, 12) << '\n'; // 7 的 12 次方
//
//	return 0;
//}
//


//#include <iostream>
//
//int main()
//{
//    int x{ 1 };
//    int y{ 2 };
//
//    std::cout << (++x, ++y) << '\n'; // x与y分别加以, 计算的结果是右操作数
//
//    return 0;
//}


//#include <iostream>
//
//int main()
//{
//    double d1{ 100.0 - 99.99 }; // 数学上应该等于 0.01 
//    double d2{ 10.0 - 9.99 }; // 数据上应该等于 0.01
//
//    if (d1 == d2)
//        std::cout << "d1 == d2" << '\n';
//    else if (d1 > d2)
//        std::cout << "d1 > d2" << '\n'; 
//    else if (d1 < d2)
//        std::cout << "d1 < d2" << '\n';
//
//    return 0;
//}

//逻辑AND的优先级高于逻辑OR

//短路求值


//#include <iostream>
//
//int getValue()
//{
//std::cerr << "getValue() called\n";
//    return 4;
//}
//
//int main()
//{
//std::cerr << "main() called\n";
//    std::cout << getValue << '\n';
//
//    return 0;
//}

//#include <iostream>
//
//void printValue(int value)
//{
//    std::cout << value << '\n';
//}
//
//int main()
//{
//    printValue(5);
//
//    return 0;
//}

//#include <iostream>
//
//void printValue(int value)
//{
//    std::cout << value << '\n';
//}
//
//int main()
//{
//    printValue(5);
//    printValue(6);
//    printValue(7);
//
//    return 0;
//}

//#include <iostream>
//
//int main()
//{
//	int x{ 1 };
//	std::cout << x << ' ';
//
//	x = x + 2;
//	std::cout << x << ' ';
//
//	x = x + 3;
//	std::cout << x << ' ';
//
//	return 0;
//}


#include <iostream>

void a()
{
	std::cout << "a() called\n";
}

void b()
{
	std::cout << "b() called\n";
	a();
}

int main()
{
	a();
	b();

	return 0;
}







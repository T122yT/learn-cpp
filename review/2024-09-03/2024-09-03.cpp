//#include <iostream>

//int getUserInput()
//{
//    std::cout << "Enter an integer: ";
//    int input{};
//    std::cin >> input;
//
//    return input;
//}
//
//void printDouble(int num)
//{
//    std::cout << num << "double is: " << num * 2 << '\n';
//
//}
//
//int main()
//{
//    int value{getUserInput()};
//    std::cout << value << '\n';
//
//    printDouble(value);
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

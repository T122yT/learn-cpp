#include<iostream>
#include"add.h"

#define PRINT_JOE

//#define�����÷�Χ���ڶ���Ĵ��ļ�

//��������
//int main()
//{
//#ifdef PRINT_JOE
//	std::cout << "joe\n";//PRINT_JOE�����壬��һ�оͻ����
//#endif 
//
//#ifdef PRINT_BOB
//	std::cout << "bob\n";//û���壬�������
//#endif
//
//#ifndef PRINT_BOB
//	std::cout << "bob\n";//û���壬�������
//#endif
//
//#if 0//�����￪ʼ������
//
//	//������Ϊһ��ע�ͷ���
//
//#endif//���������
//
//	return 0;
//}


//void doSomething(); // ǰ������ doSomething()
//
//#define PRINT
//
//int main()
//{
//    doSomething();
//
//    return 0;
//}

//int add(int x, int y); // ǰ����������ԭ��
//
//int main()
//{
//    std::cout << "The sum of 3 and 4 is " << add(3, 4) << '\n';
//    return 0;
//}

/*
ͷ�ļ���׼��
ʼ��ʹ��ͷ�ļ�������������һ���н��ܣ���
��Ҫ��ͷ�ļ��ж�������ͺ�����Ŀǰ����
Ϊͷ�ļ��ṩ���������Դ�ļ���ͬ�����ƣ����磬grades.h��grades.cpp�ɶԳ��֣���
ÿ��ͷ�ļ���Ӧ����һ���ض��Ĺ��ܣ����Ҿ����ܶ��������磬���빦��A��ص���������A.h�У����빦��B��ص���������B.h�С����ֻ����A�����ֻ����A.h��������ȡ��B��ص����ݡ�
ע��Ϊ�����ļ���ʹ�õĹ�����ʽ������Ӧ��ͷ�ļ���
ͷ�ļ���Ӧ���ܵ������루Ӧ��#include��Ҫ��ÿ���������
��#include ��Ҫ�����ݣ���Ҫ��Ϊ�����include�������ݣ���
��Ҫ#include .cpp�ļ���
��ͷ�ļ��з��ù���ĳ�δ�������û�ʹ���ĵ����������������ﱻ����������������ι������ĵ�Ӧ������Դ�ļ��С�
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
    std::cout << "����һ������" << "\n";
    int input;
    std::cin >> input;

    return input;
}

int main()
{
    // ���û�����ȡ��һ������
    int value{ getUserInput() };
    std::cout << value << "\n";

    // ���û�����ȡ��ѧ�����
//    getMathematicalOperation();

    // ���û�����ȡ�ڶ�������
//    getUserInput();

    // ������
//    calculateResult();

    // ��ӡ���
//    printResult();

    return 0;
}


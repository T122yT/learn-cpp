/*
STL的好处包括：减少编码编写工作、支持泛型编程、使代码更加模块化便于维护
STL的核心包括：
	1.容器：提供了各种数据结构，包括向量(vector)、链表(list)、队列、栈、映射(map)
	2.算法：提供了大量算法，包括排序、搜索、复制、移动等。应用时不需要关注容器的具体类型
	3.迭代器：以统一的方式访问遍历容器中的元素，而不用关心容器的内部实现细节
	4.函数对象
	5.适配器
*/

#include<iostream>
#include<vector>

using namespace std;

int main()
{
	//创建一个向量存储 int
	vector<int> vec;
	int i;

	//显示vec原始大小
	cout << "vector size = " << vec.size() << endl;

	//推入5个值到向量中
	for (i = 0; i < 5; i++)
	{
		int temp;
		cin >> temp;
		vec.push_back(temp);
	}

	//显示vec扩展后的大小
	cout << "extended vector size = " << vec.size() << endl;

	//访问向量中的5个值
	for (i = 0; i < 5; i++)
	{
		cout << "value of vector [" << i << "] = " << vec[i] << endl;
	}

	//使用迭代器 iterator 访问值
	vector<int>::iterator v = vec.begin();
	while (v != vec.end())
	{
		cout << "value of v =" << *v << endl;
		v++;
	}

	return 0;

}
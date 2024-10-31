/*
STL�ĺô����������ٱ����д������֧�ַ��ͱ�̡�ʹ�������ģ�黯����ά��
STL�ĺ��İ�����
	1.�������ṩ�˸������ݽṹ����������(vector)������(list)�����С�ջ��ӳ��(map)
	2.�㷨���ṩ�˴����㷨�������������������ơ��ƶ��ȡ�Ӧ��ʱ����Ҫ��ע�����ľ�������
	3.����������ͳһ�ķ�ʽ���ʱ��������е�Ԫ�أ������ù����������ڲ�ʵ��ϸ��
	4.��������
	5.������
*/

#include<iostream>
#include<vector>

using namespace std;

int main()
{
	//����һ�������洢 int
	vector<int> vec;
	int i;

	//��ʾvecԭʼ��С
	cout << "vector size = " << vec.size() << endl;

	//����5��ֵ��������
	for (i = 0; i < 5; i++)
	{
		int temp;
		cin >> temp;
		vec.push_back(temp);
	}

	//��ʾvec��չ��Ĵ�С
	cout << "extended vector size = " << vec.size() << endl;

	//���������е�5��ֵ
	for (i = 0; i < 5; i++)
	{
		cout << "value of vector [" << i << "] = " << vec[i] << endl;
	}

	//ʹ�õ����� iterator ����ֵ
	vector<int>::iterator v = vec.begin();
	while (v != vec.end())
	{
		cout << "value of v =" << *v << endl;
		v++;
	}

	return 0;

}
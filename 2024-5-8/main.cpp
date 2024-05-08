#include<iostream>

using namespace std;

bool isPalindrome(int x)
{
	if (x < 0 || (x % 10 == 0 && x != 0))
	{
		return false;
	}
	int revertedNum = 0;
	while (x > revertedNum)
	{
		revertedNum = revertedNum * 10 + x % 10;
		x = x / 10;
	}

	return x == revertedNum || x == revertedNum / 10;

}

int main()
{
	int num = 0;
	cin >> num;
	bool ret = isPalindrome(num);

	if (ret)
	{
		cout << "yes" << endl;
	}
	else
	{
		cout << "no" << endl;
	}
	system("pause");
	return 0;
}
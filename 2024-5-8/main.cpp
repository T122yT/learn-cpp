#include<iostream>

using namespace std;

//bool isPalindrome(int x)
//{
//	if (x < 0 || (x % 10 == 0 && x != 0))
//	{
//		return false;
//	}
//	int revertedNum = 0;
//	while (x > revertedNum)
//	{
//		revertedNum = revertedNum * 10 + x % 10;
//		x = x / 10;
//	}
//
//	return x == revertedNum || x == revertedNum / 10;
//
//}

void sort(int arr[],int len)
{
	int len1 = len;
	for (int i = 0; i < len1 - 1; i++)
	{
		for (int j = 0; j < len1 -i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main()
{
	int nums[5];
	for (int i = 0; i < 5; i++)
	{
		cin >> nums[i];
	}

	int len = sizeof(nums) / sizeof(nums[0]);

	sort(nums,5);

	//bool ret = isPalindrome(num);

	//if (ret)
	//{
	//	cout << "yes" << endl;
	//}
	//else
	//{
	//	cout << "no" << endl;
	//}

	int target = 9;

	for (int i = 0; i < len - 1; i++)
	{
		if (nums[i] + nums[i + 1] == target)
		{
			cout << i << i + 1;
		}
	}


	system("pause");
	return 0;
}
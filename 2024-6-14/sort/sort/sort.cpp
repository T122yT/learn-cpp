#include<iostream>

using namespace std;

int main()
{
	int i;
	int arr[5] = { 3,1,2,5,4 };

	//for (i = 0; i < 5-1; i++)
	//{
	//	for (int j = 0; j < 5 - i - 1; j++)
	//	{
	//		if (arr[j] > arr[j + 1])
	//		{
	//			int temp = arr[j];
	//			arr[j] = arr[j + 1];
	//			arr[j + 1] = temp;
	//		}
	//	}
	//}


	for (i = 0; i < 5 - 1; i++)
	{
		int min = i;
		for (int j = i + 1; j < 5; j++)
		{
			if (arr[min] > arr[j])
			{
				min = j;
			}
		}
		int temp = arr[i];
		arr[i] = arr[min];
		arr[min] = temp;
	}

	for (i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}
	return 0;
}
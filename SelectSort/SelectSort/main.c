#include<stdio.h>

void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int main()
{
	int arr[5] = { 1,2,5,4,3 };

	for (int i = 0; i < 5 - 1; i++)
	{
		int min = i;
		for (int j = i + 1; j < 5; j++)
		{
			if (arr[j] < arr[min])
			{
				min = j;
			}
		}
		swap(&arr[min], &arr[i]);
	}



	for (int i = 0; i < 5; i++)
	{
		printf("%d", arr[i]);
	}
	return 0;
}
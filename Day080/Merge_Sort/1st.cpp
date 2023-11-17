#include <iostream>
using namespace std;

void merge(int *arr, int s, int e)
{
	int mid = (s + e) / 2;

	int len1 = mid - s + 1;
	int len2 = e - mid;

	int left[len1];
	int right[len2];

	// copy

	int k = s;

	for (int i = 0; i < len1; i++)
	{
		left[i] = arr[k];
		k++;
	}

	k = mid + 1;

	for (int i = 0; i < len2; i++)
	{
		right[i] = arr[k];
		k++;
	}

	int leftIndex = 0;
	int rightIndex = 0;
	int mainIndex = s;

	while (leftIndex < len1 && rightIndex < len2)
	{
		if (left[leftIndex] < right[rightIndex])
		{
			arr[mainIndex++] = left[leftIndex++];
		}
		else
		{
			arr[mainIndex++] = right[rightIndex++];
		}
	}

	while (leftIndex < len1)
	{
		arr[mainIndex++] = left[leftIndex++];
	}

	while (rightIndex < len2)
	{
		arr[mainIndex++] = right[rightIndex++];
	}
}

void mergeSort(int *arr, int s, int e)
{
	if (s >= e)
		return;
	int mid = (s + e) / 2;
	mergeSort(arr, s, mid);
	mergeSort(arr, mid + 1, e);
	merge(arr, s, e);
}

int main()
{
	int arr[] = {34, 23, 12, 45, 6, 7, 8};
	int n = 7;
	int s = 0;
	int e = n - 1;

	mergeSort(arr, s, e);

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << endl;
	}
}
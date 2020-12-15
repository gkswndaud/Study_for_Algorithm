#include <stdio.h>
#include <stdlib.h>

int a;
int b;
int* num_arr;
int* number;

void    sort_arr(int arr[], int start, int end)
{
	int pivot; 
	int i; 
	int j; 
	int tmp; 

	if (start >= end) 
		return;       

	pivot = start;    
	i = start + 1;    
	j = end;          

	while (i <= j) 
	{
		while (arr[i] <= arr[pivot]) 
			i++;
		while (arr[j] >= arr[pivot] && j > start) 
			j--;                 
		if (i >= j)
		{
			tmp = arr[j];
			arr[j] = arr[pivot];
			arr[pivot] = tmp;
		}
		else
		{
			tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;
		}
	}
	
	sort_arr(arr, start, j - 1);
	sort_arr(arr, j + 1, end); 
}

int find_num(int target, int n)
{
	int i;
	int start;
	int end;
	int mid;

	start = 0;
	end = n - 1;
	i = 0;
	while (start <= end)
	{
		mid = (end + start) / 2;
		if (num_arr[mid] < target)
			start = mid + 1;
		else if (num_arr[mid] > target)
			end = mid - 1;
		else
			return num_arr[mid];
	}
	return 0;
}

int main()
{
	int i;

	i = 0;
	scanf("%d", &a);

	num_arr = (int*)malloc(sizeof(int) * a);

	while (i < a)
	{
		scanf("%d", &num_arr[i]);
		i++;
	}
	sort_arr(num_arr , 0, a-1);
	scanf("%d", &b);
	number = (int*)malloc(sizeof(int) * b);
	i = 0;
	while (i < b)
	{
		scanf("%d", &number[i]);
		if (find_num(number[i], a))
			printf("1\n");
		else
			printf("0\n");
		i++;
	}

	return (0);
}

//런타임에러가 남...

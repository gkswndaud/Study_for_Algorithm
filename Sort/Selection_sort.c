#include <stdio.h>

int main()
{
	int i;
	int j;
	int arr[7] =  {1, 6, 7, 2, 9, 14, 3};

	i = 0; 
	while(i < 6) //기준점이 맨끝까지 검사할 필요없다.
	{
		j = i + 1; 
		while (j < 7) //자기자신(i 위치)은 검사할 필요없음
		{
			if(arr[i] > arr[j]) //반복문을 돌다가 자기보다 작은값이보이면 자기위치와 바꿈
				swap(arr[i], arr[j]);
			j++;
		}
		i++;
	}

	i = 0;
	while (i < 7)
	{
		printf("%d ", arr[i]);
		i++;
	}
	return 0;
}

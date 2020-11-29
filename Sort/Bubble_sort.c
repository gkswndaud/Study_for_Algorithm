#include <stdio.h>



int main()
{
	int i;
	int j;
	int arr[7] =  {1, 6, 7, 2, 9, 14, 3};


	i = 1;
	while (i < 7) //한번 버블을 쏠때마다 하나씩 큰게 뒤로 위치하니 n만큼 반복함
	{
		j = 0;
		while(j < 7 - i) //한번 비교가 끝나면 가장 큰게 뒤로 위치하니 i만큼 줄인만큼비교
		{
			if(arr[j] > arr[j + 1]) //현재위치와 다음위치를 비교 후 바꿈
				swap(arr[j], arr[j + 1]);
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



/*총 연산이 몇번인지 계산하라*/

int funcl(int arr[], int m)
{
	int cnt = 0; // 초기값 1번
	for (int i = 0; i < n; i++) // 초기값 1번, 
	{                           // n번에 걸쳐 반복 , i < n , i++
		if(arr[i] % 5 == 0)       // i % 5, 그 값 == 0
				cnt++;                //cnt++;
	}
	return (cnt);               //반환할때 연산
}

// 1 + 1 + n * (2 + 2 + 1) + 1

// 총 5n + 3

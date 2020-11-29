#include<stdio.h> 
 
void InsertionSort(int * arr){
    int i, j;
    int key;
 
		i = 1;
    while(i< 7)
		{
        key = arr[i];
				j = i - 1;    
        while(j>=0)
				{
            if(arr[j] > key){       //key의 앞자리를 하나씩 보며 비교한다
                arr[j+1] = arr[j];  //앞자리 값이 key값보다 크다면 하나씩 자리이동
            }else{                  //key보다 작은 값이 나오면 탈출 break;
                break;
            }
		        j--;
        }
			  i++;
        arr[j+1] = key;             //그 자리에 key값을 넣는다.
    }
}
 
int main(void){
    int arr[7] =  {1, 6, 7, 2, 9, 14, 3};
    int i;
    
    for(i=0; i<MAX_LEN; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
 
 
    InsertionSort(arr);
 
	while (i < 7)
	{
		printf("%d ", arr[i]);
		i++;
	}
	
 
    return 0;
}


#include <stdio.h>

#define min(a,b) (((a) < (b)) ? (a) : (b))

int data[1000005];
int n;

int main(void) 
{
	int i;

 	scanf("%d", &n);
 	data[1] = 0;
 	i = 2;
	while(i <= n)
	{
  	  	data[i] = data[i-1]+1;
    		if(i%2 == 0) data[i] = min(data[i],data[i/2]+1);
   		if(i%3 == 0) data[i] = min(data[i],data[i/3]+1);
		i++;
 	}
  	printf("%d", data[n]);
	return (0);
}

int func(int arr[], int N)
{
	int i;
	int occur[101];

	i = 0;
	while (i < 101)
	{
		occur[i] = 0;
		i++;
	}

	i = 0;
	while (i < N)
	{
		if (occur[100 - arr[i]] == 1)
			return (1);
		occur[arr[i]] = 1;
		i++;
	}
	return (0);
}
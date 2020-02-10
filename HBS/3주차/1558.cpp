long long int f(long long int n)
{
	long long int num = 1;
	int i = 0;
	long long int arr[20];
	while (n > 0)
	{
		arr[i] = n % 10;
		n /= 10;
		i++;
	}
	long long int result = 0;
	for (int s = i - 1; s >= 0; s--)
	{
		result += arr[s] * num;
		num *= 10;
	}
	return result;
}
int sqrt(long long int n)
{
	for (long long int i = 0; i <= n; i++)
	{
		if (i * i == n)
		    return (int)i;
		else if (i * i > n)
		    return (int)i-1;
	}
}
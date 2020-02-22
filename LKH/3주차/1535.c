int f()
{
	int index= 0;
	int max = d[0];
	for (int i = 1; i < n; i++)
	{
		if (max < d[i])
		{
			max = d[i];
			index = i;
		}
	}
	return index + 1;
}
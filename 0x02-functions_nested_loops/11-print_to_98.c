void print_to_98(int n)
{
	int i;
	
	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf(i);
		}
	}
	else
	{
		for (i = 0; i <= 98; i++)
		{
			printf(i);
		}
	}
	if (i != 98)
	{
		printf(", ");
	}
}

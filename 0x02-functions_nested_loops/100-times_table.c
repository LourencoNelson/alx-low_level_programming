void print_times_table(int n)
{
	int i;
	int j;

	if ((n >= 0) || (n <= 15))
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				printf(i*j);
				if(j != n)
				{
					printf(", ");
				}
			}
			printf("\n");
		}
	}
}

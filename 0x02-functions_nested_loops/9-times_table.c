void times_table(void)
{
	int i;
	int j;
	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			printf(i*j);
			if(j != 9)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
}

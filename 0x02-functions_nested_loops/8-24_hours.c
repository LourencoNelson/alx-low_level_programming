void jack_bauer(void)
{
	int i;
	int j;
	int k;
	int l;

	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j < 9; j++)
		{
			for (k = 0; k < 6; k++)
			{
				for (l = 0; l <= 9; i++)
				{
					if(i == 2 && j >= 4)
					{
						break;
					}
					printf("%d%d:%d%d\n", i, j, k, l);
				}
			}
		}
	}
}

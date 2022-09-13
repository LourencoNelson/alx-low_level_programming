int print_sign(int n)
{
	int ret;
	if (n > 0)
	{
		printf("+");
		ret = 1;
	}
	else if (n < 0)
	{
		printf("-");
		ret = -1;
	}
	else
	{
		printf("0");
		ret = 0;
	}
	return ret;
}

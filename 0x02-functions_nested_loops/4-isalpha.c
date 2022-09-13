int _isalpha(int c)
{
	int ret;

	if (isalpha(c) && (isupper(c) || islower(c)))
	{
		ret = 1;
	}
	else
	{
		ret = 0;
	}
	return ret;
}

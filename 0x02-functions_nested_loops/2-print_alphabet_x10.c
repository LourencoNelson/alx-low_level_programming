void print_alphabet_x10(void)
{
	char ch;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (ch = 'a'; ch < 'z'; i++)
		{
			_putchar(ch);
		}
		putchar('\n');
	}
}

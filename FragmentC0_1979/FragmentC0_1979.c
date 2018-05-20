#include <stdio.h>

int main()
{
	int s = 0;
	int n = 1979;

	while (n>0)
	{
		s = s + n % 10;
		n = n / 10;
	}
	printf("%d", s);
	getchar();
	return 0;
}
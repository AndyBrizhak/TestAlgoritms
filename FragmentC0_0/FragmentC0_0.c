#include <stdio.h>

int main()
{
	int n = 5;
	int newN = 0;

	while (n>0)
	{
		newN = newN*10 + n % 2;
		n /= 2;
	}
	printf("%d", newN);
	getchar();
	return 0;
}
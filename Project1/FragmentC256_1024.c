#include <stdio.h>

int main()
{
	int a = 256;
	int b = 1024;
	int c;
	while (b)
	{
		c = a % b;
		a = b;
		b = c;
	}
	printf("%d", a);
	getchar();


	return 0;
}
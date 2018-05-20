#include <stdio.h>

void F(int n)
{
	printf("%d\n", n);
	if (n<4)
	{
		F(n + 1);
		F(n + 3);
	}
}

int main()
{
	int n = 1;
	F(n);

	
	
	getchar();
	return 0;
}
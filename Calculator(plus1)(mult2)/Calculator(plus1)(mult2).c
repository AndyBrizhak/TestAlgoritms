#include <stdio.h>
//� ����������� ����������� ��� �������, ������� ��������� ������:
//1. ������� 1.
//2. ������ �� 2.

int  Calc(int first, int second, int count)
{
	if (second == 1)
	{
		count=1;
		return count;
	}
	else if (second > first && second % 2 ==0)
	{
		count = Calc(first, second-1, count) + Calc(first, second / 2, count);
		return count;
	}
	else if (second > first && second % 2 != 0)
	{
		count = Calc(first, second-1, count);
		return count;
	}
}

int main()
{
	int first =1;
	int second = 16;
	int countProg;
	int count;

	//printf("\n Input first num: ");
	//scanf("%i", first);
	//printf("\n Input second num: ");
	//scanf("%i", second);
	count = 0;
	countProg = Calc(first, second, count);
	printf("\n Count pograms: %d", countProg);
	getchar();

	
	return 0;
}
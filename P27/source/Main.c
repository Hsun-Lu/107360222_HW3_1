#include <stdio.h>
#include <stdlib.h>

long F(long n);

int main(void)
{
	int i;
	for (i = 0; i <= 10; i++)
	{
		printf("%2d! = %1d\n", i, F(i));
	}
	system("pause");
	return 0;
}

long F(long n)
{
	if (n <= 1)
	{
		return 1;
	}
	else
	{
		return(n*F(n - 1));
	}
}
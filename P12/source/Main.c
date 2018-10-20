#include <stdio.h>
#include <stdlib.h>

int S(int y);

int main(void)
{
	int x;

	for (x = 1; x <= 10; x++)
	{
		printf("%d ", S(x));
	}
	printf("\n");
	system("pause");
	return 0;
}

int S(int y)
{
	return y * y;
}
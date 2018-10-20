#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;
	unsigned s;
	printf("¿é¤JºØ¤l¡G");
	scanf_s("%u", &s);
	srand(s);
	for (i = 1; i <= 10; i++)
	{
		printf("%10d", 1 + (rand()%6));
		if (i % 5 == 0)
		{
			printf("\n");
		}
	}
	system("pause");
	return 0;
}